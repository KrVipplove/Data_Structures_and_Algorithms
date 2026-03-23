#include <iostream>
using namespace std;

bool isPossible(vector<int>& nums, int n, int c, int mid){
    int cow = 1, lastPos = nums[0];

    for(int i=1; i<n; i++){
        if(nums[i] - lastPos >= mid){
            cow++;
            lastPos = nums[i];
        }
        if(cow == c){
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int>& nums, int n, int c){
    sort(nums.begin(), nums.end());

    int start = 1, end = nums[n-1] - nums[0];
    int ans = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(isPossible(nums, n, c, mid)){
            ans = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the total number of stalls: ";
    cin>>n;

    vector<int> nums;
    cout<<"Enter the positions of stalls: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    int c;
    cout<<"Enter the total number of cows: ";
    cin>>c;

    cout<<"Largest minimum distance between cows: "<<aggressiveCows(nums, n, c)<<endl;
    return 0;
}