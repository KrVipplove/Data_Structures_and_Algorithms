#include <iostream>
#include <vector>
#include <set>
using namespace std;

void combinationSum(vector<int>& nums, int idx, int target, vector<int>& comb, set<vector<int>>& ans){

    if(target == 0){
        ans.insert(comb);
        return;
    }

    if(idx==nums.size() || target<0){
        return;
    }
    
    comb.push_back(nums[idx]);
    combinationSum(nums, idx+1, target-nums[idx], comb, ans);
    combinationSum(nums, idx, target-nums[idx], comb, ans);

    comb.pop_back();
    combinationSum(nums, idx+1, target, comb, ans);

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

    vector<int> comb;
    set<vector<int>> ans;

    combinationSum(nums, 0,target, comb, ans);

    cout<<"Combination sum equals to target: "<<endl;
    for(auto& res : ans){
        for(int val : res){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}