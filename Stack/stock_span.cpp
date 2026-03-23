#include <iostream>
#include <vector> 
#include <stack>
using namespace std;

vector<int> stockSpan(vector<int>& nums){
    int n = nums.size();
    stack<int> s;
    vector<int> ans(n);

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[s.top()] <= nums[i]){
            s.pop();
        }

        ans[i] = s.empty() ? i+1 : i-s.top();

        s.push(i);
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter total number of days: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the price of stock each day: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    vector<int> res = stockSpan(nums);

    cout<<"Span of each days stock: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}