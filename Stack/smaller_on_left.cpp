#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> smallerOnLeft(vector<int>& nums, int n){
    stack<int> s;
    vector<int> ans(n,-1);

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[s.top()] >= nums[i]){
            s.pop();
        }
        
        if(!s.empty()){
            ans[i] = nums[s.top()];
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
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    vector<int> res = smallerOnLeft(nums, n);

    cout<<"Smaller of the left of array: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}