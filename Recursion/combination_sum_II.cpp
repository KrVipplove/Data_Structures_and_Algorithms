#include <iostream>
using namespace std;

void combinationSum(vector<int>& nums, int target, int idx, vector<int>& comb, vector<vector<int>>& ans){
    if(target==0){
        ans.push_back(comb);
        return;
    }

    if(target<0 || idx==nums.size()){
        return;
    }

    comb.push_back(nums[idx]);
    combinationSum(nums, target-nums[idx], idx+1, comb, ans);
    comb.pop_back();
    int nextIdx = idx+1;
    while(nextIdx<nums.size() && nums[nextIdx] == nums[idx]){
        nextIdx++;
    }
    combinationSum(nums, target, nextIdx, comb, ans);
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    int target;
    cout<<"Enter the target sum: ";
    cin>>target;

    vector<int>comb;
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    combinationSum(nums, target, 0, comb, ans);

    for(auto& res : ans){
        for(int val : res){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}