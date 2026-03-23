#include <iostream>
#include <vector>
using namespace std;

bool sortedOrNot(vector<int>& nums, int n){
    if(n==0 || n==1) return true;
    return nums[n-1] >= nums[n-2] && sortedOrNot(nums,n-1);
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

    if(sortedOrNot(nums,n)){
        cout<<"Input array is sorted"<<endl;
    }else{
        cout<<"Input array is not sorted"<<endl;
    }
    return 0;
}