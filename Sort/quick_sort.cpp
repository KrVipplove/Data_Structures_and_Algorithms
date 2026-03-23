#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int>& nums, int start, int end){
    int pos = start;
    for(int i=start; i<end; i++){
        if(nums[i]<=nums[end]){
            swap(nums[i], nums[pos]);
            pos++;
        }
    }
    swap(nums[pos], nums[end]);
    return pos;
}

void quickSort(vector<int>& nums, int start, int end){

    if(start>=end) return;

    int pivot = partition(nums, start, end);
    quickSort(nums, start, pivot-1);
    quickSort(nums, pivot+1, end);
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int start = 0;
    int end = n-1;
    quickSort(nums, start, end);

    for(int val : nums){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}