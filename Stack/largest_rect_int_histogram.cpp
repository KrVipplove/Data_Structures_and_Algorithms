#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;


// METHOD 1 (LENGTH BASED) (3 pass)
/*
vector<int> leftLength(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n);
    stack<int> s;

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[s.top()] >= nums[i]){
            s.pop();
        }

        ans[i] = s.empty() ? i+1 : i-s.top();

        s.push(i);
    }
    return ans;
}

vector<int> rightLength(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n);
    stack<int> s;

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[i] <= nums[s.top()]){
            ans[s.top()] = i - s.top();
            s.pop();
        }

        s.push(i);
    }

    while(!s.empty()){
        ans[s.top()] = n-s.top();
        s.pop();
    }

    return ans;
}

int largestRectangleArea(vector<int>& nums){
    int n = nums.size();

    vector<int> left = leftLength(nums);
    vector<int> right = rightLength(nums);

    int maxArea = INT_MIN;
    int area = 0;

    for(int i=0; i<n; i++){
        area = nums[i] * (left[i] + right[i] -1);
        maxArea = max(maxArea,area);
    }

    return maxArea;
}
*/


// METHOD 2 (index based)       (3 pass)
/*
vector<int> leftLength(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,-1);
    stack<int> s;

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[s.top()] >= nums[i]){
            s.pop();
        }

        if(!s.empty()){
            ans[i] = s.top();
        }

        s.push(i);
    }
    return ans;
}

vector<int> rightLength(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,n);
    stack<int> s;

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[i] <= nums[s.top()]){
            ans[s.top()] = i;
            s.pop();
        }

        s.push(i);
    }

    return ans;
}

int largestRectangleArea(vector<int>& heights) {
    vector<int> left = leftLength(heights);
    vector<int> right = rightLength(heights);

    int maxArea = INT_MIN;
    int area = 0;

    for(int i=0; i<heights.size(); i++){
        area = heights[i] * (right[i] -left[i] - 1);
        maxArea = max(area, maxArea);
    }

    return maxArea;
}
*/


// METHOD 3 (single pass)

int largestRectangleArea(vector<int>& nums){
    int n = nums.size();
    stack<int> s;
    int maxArea = 0;

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[i] <= nums[s.top()]){
            int rightSmallerIdx = i;

            int idx = s.top();
            s.pop();

            int leftSmallerIdx = s.empty() ? -1 : s.top();

            maxArea = max(maxArea, nums[idx] * (rightSmallerIdx - leftSmallerIdx - 1));
        }

        s.push(i);
    }

    while(!s.empty()){
        int idx = s.top();
        s.pop();
        int leftSmallerIdx = s.empty() ? -1 : s.top();

        maxArea = max(maxArea, nums[idx] * (n - leftSmallerIdx - 1));
    }

    return maxArea;
}


int main(){
    int n;
    cout<<"Enter the total number of bars: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the heights of the each bar: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int maxArea = largestRectangleArea(nums);

    cout<<"Area of largest rectangle this histogram can accomodate: "<<maxArea<<" unit squared"<<endl;

    return 0;
}


