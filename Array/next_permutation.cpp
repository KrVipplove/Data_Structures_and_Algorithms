#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums, int n){
    int pivot = -1;
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            pivot = i;
            break;
        }
        
    }
    if(pivot == -1){
        reverse(nums.begin(), nums.end());
        return;
    }

    for(int i=n-1; i>pivot; i--){
        if(nums[i]>nums[pivot]){
            swap(nums[i], nums[pivot]);
            break;
        }
    }
    int i=pivot+1, j=n-1;
    while(i<=j){
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
}

void printArray(vector<int>& nums, int n){
    cout<<"Next Permutation: ";
    for(int val: nums){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums;
    cout<<"Enter the elements in the array: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    nextPermutation(nums, n);
    printArray(nums, n);
    return 0;
}