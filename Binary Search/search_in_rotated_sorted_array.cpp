#include <iostream>
using namespace std;

int SearchInRotatedSortedArray(vector<int>& nums, int target){
    int start = 0, end = nums.size()-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(nums[mid]==target){
            return mid;
        }

        if(nums[start] <= nums[mid]){
            if(nums[start] <= target && target <= nums[mid]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }else{
            if(nums[mid]<= target && target<=nums[end]){
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
    cout<<"Enter the size of the arrray: ";
    cin>>size;

    vector<int> nums;
    cout<<"Enter the elements in the array: ";
    for(int i=0; i<size;  i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    int target;
    cout<<"Enter the element you want to find: ";
    cin>>target;

    cout<<"Target is at: "<<SearchInRotatedSortedArray(nums, target)<<endl;
    return 0;
}