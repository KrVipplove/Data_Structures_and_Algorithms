#include <iostream>
using namespace std;

bool isValid(vector<int>& nums, int n, int m, int mid){
    int labour = 1, length = 0;
    for(int i=0; i<n; i++){
        if(nums[i]>mid) return false;
        if(length + nums[i] <= mid){
            length += nums[i];
        }else{
            labour++;
            length = nums[i];
        }
    }
    return labour>m ? false : true;
}

int paintersPartition(vector<int>& nums, int n, int m){

    if(m>n) return -1;

    int ans=-1;
    int start = 0;
    int end = 0;
    for(int i=0; i<n; i++){
        start = max(start, nums[i]);
        end += nums[i];
    }

    while(start<=end){
        int mid = start + (end-start)/2;
        if(isValid(nums, n, m, mid)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the total number of boards: ";
    cin>>n;

    vector<int> nums;
    cout<<"Enter the length of the boards: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    int m;
    cout<<"Enter the total number of labours: ";
    cin>>m;

    cout<<"Required ans: "<<paintersPartition(nums, n, m)<<endl;
    return 0;
}