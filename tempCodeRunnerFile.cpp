
bool isValid(vector<int>& nums, int n, int p, int mid){
    int labour = 1;
    int time = 0;

    for(int i=0; i<n; i++){
        if(nums[i] > mid) return false;
        if(time + nums[i] <= mid){
            time += nums[i];
        }else{
            labour++;
            time = nums[i];
        }
    }
    return labour > p ? false : true;
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the total number of boards: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the lengths of each board: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int p;
    cout<<"Enter the number of labours: ";
    cin>>p;

    int start = 0, end = 0, ans = -1;
    for(int i=0; i<n; i++){
        start = max(start, nums[i]);
        end += nums[i];
    }

    while(start <= end){
        int mid = start + (end-start)/2;

        if(isValid(nums, n, p, mid)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    cout<<"Minimum time required to do job: "<<ans<<endl;
    return 0;
}