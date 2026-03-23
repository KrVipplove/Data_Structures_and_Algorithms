
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> m;

    for(int i=0; i<nums.size(); i++){
        int rem = target - nums[i];

        if(m.find(rem)!=m.end()){
            return {i,m[rem]};
        }
        m[nums[i]] = i;
    }
    return {-1,-1};
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

    vector<int> ans = twoSum(nums,target);

    if(ans[0]==-1){
        cout<<"There is no pair sum for this target";
    }else{
        cout << "Indices: " << ans[0] << " and " << ans[1] << endl;
        cout << "Values: " << nums[ans[0]] << " and " << nums[ans[1]] << endl;
    }
    return 0;
}