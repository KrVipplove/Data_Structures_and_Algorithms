#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> firstNegativeNoInEveryWindowSizeK(vector<int>& nums, int k){
    int n = nums.size();
    queue<int> q;
    vector<int> ans;

    for(int i=0; i<k-1; i++){
        if(nums[i] < 0) q.push(i);
    }

    for(int i=k-1; i<n; i++){
        if(nums[i] < 0) q.push(i);

        if(q.empty()){
            ans.push_back(0);
        }else{
            ans.push_back(nums[q.front()]);
        }

        if(!q.empty() && q.front() == i-k+1) q.pop(); 
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

    int k;
    cout<<"Enter the size of the window: ";
    cin>>k;

    vector<int> res = firstNegativeNoInEveryWindowSizeK(nums, k);

    cout<<"First negative number in every window size "<<k<<": ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}