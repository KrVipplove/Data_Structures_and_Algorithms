#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// METHOD 1 (two pointer approach TC=O(n) SC=O(1)) best optimised approach
/*
int trap(vector<int>& heights){
    int n = heights.size();

    int leftMax = 0, rightMax = 0;
    int left = 0, right = n-1;

    int ans = 0;
    while(left < right){
        leftMax = max(leftMax, heights[left]);
        rightMax = max(rightMax, heights[right]);

        if(leftMax <= rightMax){
            ans += leftMax - heights[left++];
        }else{
            ans += rightMax - heights[right--];
        }
    }
    return ans;
}
*/

// METHOD 2 (using stack TC = O(n) SC = O(n))

int trap(vector<int>& heights){
    int n = heights.size();
    int ans = 0;
    stack<int> s;

    for(int i=0; i<n; i++){
        while(!s.empty() && heights[i] > heights[s.top()]){
            int idx = s.top();
            s.pop();

            if(s.empty()) break;

            int width = i - s.top() - 1;
            int boundedHeight = min(heights[s.top()],heights[i]) - heights[idx];

            ans += width * boundedHeight;
        }
        s.push(i);
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> heights(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>heights[i];
    }

    cout<<"Maximum water histogram can trap: "<<trap(heights)<<" squared unit"<<endl;

    return 0;
}