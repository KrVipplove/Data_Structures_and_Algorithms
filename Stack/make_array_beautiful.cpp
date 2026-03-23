#include <iostream>
#include <stack>
using namespace std;

vector<int> beautifulArray(vector<int>& nums, int n){
    stack<int> s;

    for(int i=0; i<n; i++){
        if(!s.empty() && ((nums[i]>=0 && s.top()<0) || (nums[i]<0 && s.top()>=0))){
            s.pop();
        }else{
            s.push(nums[i]);
        }
    }

    vector<int> ans(s.size());
    for(int i=s.size()-1; i>=0; i--){
        ans[i] = s.top();
        s.pop();
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

    vector<int> res = beautifulArray(nums, n);

    cout<<"Beautiful Array: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}