#include <iostream>
using namespace std;

void Heapify(vector<int>& nums, int idx, int n){
    int smallest = idx;
    int left = 2*idx +1;
    int right = 2*idx +2;

    if(left < n && nums[left] < nums[smallest]) smallest = left;
    if(right < n && nums[right] < nums[smallest]) smallest = right;

    if(smallest != idx){
        swap(nums[smallest], nums[idx]);
        Heapify(nums, smallest, n);
    }
}

void buildMinHeap(vector<int>& nums, int n){
    for(int i=n/2 -1; i >= 0; i--){
        Heapify(nums, i, n);
    }
}

void printHeap(vector<int> nums, int n){
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

    buildMinHeap(nums, n);
    printHeap(nums, n);

    return 0;
}