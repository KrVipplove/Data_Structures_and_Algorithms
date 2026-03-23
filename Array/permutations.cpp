#include <iostream>
using namespace std;

void getPermute(vector<int>& nums, int idx, vector<vector<int>>& ans){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i=idx; i<nums.size(); i++){
        swap(nums[i], nums[idx]);
        getPermute(nums, idx+1, ans);
        swap(nums[i], nums[idx]);
    }
    return;
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

    vector<vector<int>> ans;
    getPermute(nums, 0, ans);

    cout<<"All permutations:\n";
    for(auto& vec : ans){
        for(int val : vec){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}




