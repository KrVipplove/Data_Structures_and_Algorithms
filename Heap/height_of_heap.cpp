#include <iostream>
#include <vector>
using namespace std;

void Heapify(vector<int>& nums, int idx, int n){
    int largest = idx;
    int left = 2*idx+1;
    int right = 2*idx+2;

    if(left < n && nums[left] > nums[largest]) largest = left;
    if(right < n && nums[right] > nums[largest]) largest = right;

    if(largest != idx){
        swap(nums[largest], nums[idx]);
        Heapify(nums, largest, n);
    }
}

void build_maxHeap(vector<int>& nums, int n){
    for(int i=(n/2)-1; i>=0; i--){
        Heapify(nums, i, n);
    }
}

int height_of_maxHeap(vector<int>& nums, int n){
    if(n <= 1) return n;

    int height = 0;
    int idx = 0;
    int left = 2*idx+1;

    while(left < n){
        height++;
        idx = left;
        left = 2*idx+1;
    }

    return height;
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

    build_maxHeap(nums, n);

    cout<<"Height of maxHeap: "<<height_of_maxHeap(nums, n)<<endl;

    return 0;
}