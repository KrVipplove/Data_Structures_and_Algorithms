#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int start, int mid, int end){
    vector<int> temp(end-start+1);
    int left = start, right = mid+1, idx = 0;

    while(left<=mid && right<=end){
        if(nums[left]<=nums[right]){
            temp[idx] = nums[left];
            left++, idx++;
        }else{
            temp[idx] = nums[right];
            right++, idx++;
        }
    }

    while(left <= mid){
        temp[idx] = nums[left];
        left++, idx++;
    }
    
    while(right<=end){
        temp[idx]=nums[right];
        right++, idx++;
    }

    for(int i=0; i<temp.size(); i++){
        nums[start + i] = temp[i];
    }
    
}

void mergeSort(vector<int>& nums, int start, int end){
    if(start>=end){
        return;
    }

    int mid = start + (end-start)/2;

    mergeSort(nums, start, mid);
    mergeSort(nums, mid+1, end);

    merge(nums, start, mid, end);
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

    int start = 0;
    int end = n-1;
    mergeSort(nums, start, end);

    cout<<"Sorted array: ";
    for(int val : nums){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}