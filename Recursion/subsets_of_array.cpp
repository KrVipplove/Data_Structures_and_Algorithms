#include <iostream>
#include <vector>
using namespace std;

void printSubset(vector<int>& nums, vector<int>& ans, int i){
    if(i==nums.size()){
        for(int val: ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }

    ans.push_back(nums[i]);
    printSubset(nums, ans, i+1);
    ans.pop_back();

    printSubset(nums, ans, i+1);
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
    vector<int> ans;

    printSubset(nums,ans,0);

    return 0;
}