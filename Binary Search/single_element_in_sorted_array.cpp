#include <iostream>
#include <vector>
using namespace std;

int singleInSorted(vector<int>& nums){
    int n = nums.size();
    int start=0, end=nums.size()-1;

    if(n==1) return nums[0];
    
    while(start<=end){
        int mid = start + (end-start)/2;

        if(mid==0 && nums[0]!=nums[1]) return nums[0];
        if(mid==n-1 && nums[n-1]!=nums[n-2]) return nums[n-1];

        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        if(mid%2==0){
            if(nums[mid]==nums[mid-1]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }else{
            if(nums[mid]==nums[mid-1]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    vector<int> nums;
    cout<<"Enter the elemnets in the array: ";
    for(int i=0; i<size; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    cout<<"Single element in this array is: "<<singleInSorted(nums)<<endl;

    return 0;
}