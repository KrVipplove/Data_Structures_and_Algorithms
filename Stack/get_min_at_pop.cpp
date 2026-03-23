#include <iostream>
#include <vector>
#include <stack>
using namespace std;

stack<int> getMinAtTop(vector<int>& nums, int n){
    stack<int> s;

    for(int i=0; i<n; i++){
        if(i==0){
            s.push(nums[0]);
        }else{
            s.push(min(nums[i],s.top()));
        }
    }
    return s;
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

    stack<int> s = getMinAtTop(nums, n);
    cout<<"Minimum at top: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}