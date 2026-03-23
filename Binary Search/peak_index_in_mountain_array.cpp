#include <iostream>
#include <vector>
using namespace std;

int mountainArray(vector<int>& nums){
    int start=1, end=nums.size()-2;
    
    while(start <= end){
        int mid = start + (end-start)/2;

        if(nums[mid-1] <= nums[mid] && nums[mid] >= nums[mid]){
            return mid;
        }else if(nums[mid-1] < nums[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    vector<int> nums;
    cout<<"Enter the elements in the array: ";
    for(int i=0; i<size; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    cout<<"Peak element is at: "<<mountainArray(nums)<<endl;
    return 0;

}