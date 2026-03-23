#include <iostream>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int i=m-1, j=n-1, idx=m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>=nums2[j]){
            nums1[idx]=nums1[i];
            i--;
            idx--;
        }else{
            nums1[idx]=nums2[j];
            j--;
            idx--;
        }
    }
    while(j>=0){
        nums1[idx]=nums2[j];
        idx--;
        j--;
    }
}

void printArray(vector<int>& nums1){
    for(int val: nums1){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    int m;
    cout<<"Enter the size of the first array: ";
    cin>>m;

    vector<int> nums1;
    cout<<"Enter the elements of the first array: ";
    for(int i=0; i<m; i++){
        int elements;
        cin>>elements;
        nums1.push_back(elements);
    }

    int n;
    cout<<"Enter the size of the second array: ";
    cin>>n;

    vector<int> nums2;
    cout<<"Enter the elements of the second array: ";
    for(int i=0; i<n; i++){
        int elements;
        cin>>elements;
        nums2.push_back(elements);
    }

    nums1.resize(m + n);
    merge(nums1, m, nums2, n);
    printArray(nums1);

    return 0;
}