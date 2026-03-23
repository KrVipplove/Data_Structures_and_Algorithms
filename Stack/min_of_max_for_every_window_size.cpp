#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

vector<int> minOfMaxForEveryWindowSize(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,INT_MAX);
    stack<int> s;

    for(int i=0; i<=n; i++){
        int curr = (i==n)? INT_MAX : nums[i];

        while(!s.empty() && curr > nums[s.top()]){
            int idx = s.top();
            s.pop();

            int maxWinSize = s.empty()? i : i - s.top() - 1;

            ans[maxWinSize-1] = min(ans[maxWinSize-1], nums[idx]);
        }
        s.push(i);
    }
    
    for(int i=n-2; i>=0; i--){
        ans[i] = min(ans[i], ans[i+1]);
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

    vector<int> res = minOfMaxForEveryWindowSize(nums);
    cout<<"Minimum of maximum for every window size: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}