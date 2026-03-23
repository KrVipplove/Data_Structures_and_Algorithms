#include <iostream>
using namespace std;

void sort(vector<int>& nums, int n){
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

void printArray(vector<int>& nums, int n){
    cout<<"Sorted: ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        int elements;
        cin>>elements;
        nums.push_back(elements);
    }

    sort(nums,n);
    printArray(nums,n);
    cout<<endl;

    return 0;
}