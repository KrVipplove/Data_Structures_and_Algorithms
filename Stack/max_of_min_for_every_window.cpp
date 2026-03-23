#include <iostream>
#include <vector>
#include <climits>
using namespace std;


// METHOD 1 (brute force TC = O(N^3))
/*
vector<int> maxOfMinForEveryWindowSize(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,0);

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            int minNum = INT_MAX;
            for(int k = j; k<j+i+1; k++){
                minNum = min(minNum, nums[k]);
            }
            ans[i] = max(ans[i], minNum);
        }
    }
    return ans;
}
*/

// METHOD 2 (using stack TC = O(n))
vector<int> maxOfMinForEveryWindowSize(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,0);
    stack<int> s;

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[i] < nums[s.top()]){
            int idx = s.top();
            s.pop();

            int maxWinSize = s.empty()? i : i - s.top() - 1;

            ans[maxWinSize-1] = max(ans[maxWinSize-1], nums[idx]);
        }
        s.push(i);
    }

    while(!s.empty()){
        int idx = s.top();
        s.pop();

        int maxWinSize = s.empty() ? n : n - s.top() - 1;

        ans[maxWinSize-1] = max(ans[maxWinSize-1], nums[idx]);
    }

    for(int i=n-2; i>=0; i--){
        ans[i] = max(ans[i], ans[i+1]);
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    vector<int> res = maxOfMinForEveryWindowSize(nums);
    cout<<"Maximum of min for every window: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}