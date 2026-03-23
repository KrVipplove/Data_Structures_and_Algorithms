#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>& nums, int start, int mid, int end, vector<int>& temp){
    int left = start;
    int right = mid+1;
    int idx=start;
    int InvCount = 0;

    while(left<=mid && right<=end){
        if(nums[left]<=nums[right]){
            temp[idx]=nums[left];
            idx++;
            left++;
        }else{
            temp[idx]=nums[right];
            idx++;
            right++;
            InvCount+= mid-left+1;
        }
    }

    while(left<=mid){
        temp[idx]=nums[left];
        idx++;
        left++;
    }

    while(right<=end){
        temp[idx]=nums[right];
        idx++;
        right++;
    }

    for(int i= start; i<=end; i++){
        nums[i]=temp[i];
    }
    return InvCount;


}

int helper(vector<int>& nums, int start, int end, vector<int>& temp){

    if(start>=end){
        return 0;
    }
    
    int mid = start+(end-start)/2;

    int leftInvCount = helper(nums, start, mid, temp);
    int rightInvCount = helper(nums, mid+1, end, temp);

    int InvCount = merge(nums, start, mid, end, temp);

    return InvCount+leftInvCount+rightInvCount;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    if (n == 0) {
        cout << "Total number of inversions: 0\n";
        return 0;
    }

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    vector<int> temp(n);

    cout<<"Total number of inversions: "<<helper(nums,0,n-1,temp)<<endl;

    return 0;
}