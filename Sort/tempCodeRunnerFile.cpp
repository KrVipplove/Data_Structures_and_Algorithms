#include <iostream>
#include <vector>
using namespace std;

void Heapify(vector<int>& nums, int idx, int n){
    int left = 2*idx + 1;
    int right = 2*idx +2;
    int largest = idx;

    if(left < n && nums[left] > nums[largest]) largest = left;
    if(right < n && nums[right] > nums[largest]) largest = right;

    if(largest != idx){
        swap(nums[idx], nums[largest]);
        Heapify(nums, largest, n);
    }
}

void buildMaxHeap(vector<int>& nums, int n){
    for(int i=n/2 -1; i>=0; i--){
        Heapify(nums, i, n);
    }
}

void heapSort(vector<int>& nums, int n){
    for(int i=n-1; i>0; i--){
        swap(nums[0], nums[i]);
        Heapify(nums, 0, i);
    }
}

void printArray(vector<int> nums, int n){
    cout<<"Array: ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
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

    buildMaxHeap(nums, n);
    printArray(nums, n);
    heapSort(nums, n);
    printArray(nums, n);
}