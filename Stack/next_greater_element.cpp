// NEXT GREATERE IN CIRCULAR ARRAY
#include <iostream>
#include <vector>
#include <stack>
using namespace std;


// METHOD 1 (forward loop on nums)
vector<int> nextGreater(vector<int>& nums){
    int n = nums.size();
    stack<int> s;
    vector<int> ans(n,-1);

    for(int i=0; i<2*n; i++){

        int idx = i%n;
        while(!s.empty() && nums[idx] > nums[s.top()]){
            ans[s.top()] = nums[idx];
            s.pop();
        }

        s.push(idx);
    }

    return ans;
}


// METHOD 2 (backward loop on nums) for linear array not circular
vector<int> nextGreaterRev(vector<int>& nums){
    int n = nums.size();
    stack<int> s;
    vector<int> ans(n,-1);

    for(int i=n-1; i>=0; i--){

        while(!s.empty() && nums[i]>=nums[s.top()]){
            s.pop();
        }

        if(!s.empty()){
            ans[i] = nums[s.top()];
        }

        s.push(i);
    }
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

    vector<int> res = nextGreater(nums);

    cout<<"Next Greater element if each numbers: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}