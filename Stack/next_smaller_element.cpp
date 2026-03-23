#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmaller(vector<int>& nums, int n){
    vector<int> ans(n,-1);
    stack<int> s;

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[i] < nums[s.top()]){
            ans[s.top()] = nums[i];
            s.pop();
        }

        s.push(i);
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the arary: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    vector<int> res = nextSmaller(nums, n);

    cout<<"Next smaller element of nums: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}