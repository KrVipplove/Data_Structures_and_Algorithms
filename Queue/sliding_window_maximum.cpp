#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> slidingWindowMaximum(vector<int>& nums, int k){
    int n = nums.size();
    deque<int> d;
    vector<int> ans;

    for(int i=0; i<n; i++){

        while(!d.empty() && nums[d.back()] <= nums[i]){
            d.pop_back();
        }
        d.push_back(i);

        while(!d.empty() && d.front() < i-k+1){
            d.pop_front();
        }

        if(i >= k-1){
            ans.push_back(nums[d.front()]);
        }
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

    vector<int> res = slidingWindowMaximum(nums, k);
    cout<<"Max element/s in sliding window: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}