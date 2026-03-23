#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target){
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for(int i=0; i<n; i++){
        if(i>0 && nums[i] == nums[i-1]) continue;
        for(int j=i+1; j<n; j++){
            if(j>i+1 && nums[j] == nums[j-1]) continue;
            int p = j+1, q = n-1;
            while(p<q){
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];
                if(sum < target){
                    p++;
                }else if(sum > target){
                    q--;
                }else{
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++, q--;
                    while(p<q && nums[p]==nums[p-1]) p++;
                    while(p<q && nums[q]==nums[q+1]) q--;
                }
            }
        }
    }
    return ans;
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
    cout<<"Enter the sum target: ";
    cin>>target;

    vector<vector<int>> result = fourSum(nums, target);

    cout<<"Pairs of the sum equals to "<<target<<" is/are:"<<endl;
    for(auto val : result){
        for(int val1 : val){
            cout<<val1<<" ";
        }
        cout<<endl;
    }
    return 0;
}