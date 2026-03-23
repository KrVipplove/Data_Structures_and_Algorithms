#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// METHOD 1 (TC -> O(Nk))   brute force
/*
int minNumberOfKconsutiveBitFlip(vector<int>& nums, int k){
    int n = nums.size();
    int flip = 0;

    for(int i=0; i<n; i++){
        if(nums[i] == 0){
            for(int j=i; j<i+k; j++){
                if(j >= n) return -1;
                nums[j] = !nums[j];
            }
            flip++;
        }
    }
    return flip;
}
*/


// METHOD 2 (TC -> O(N)) optimised

int minNumberOfKconsutiveBitFlip(vector<int>& nums, int k){
    int n = nums.size();
    queue<int> q;
    int flip = 0;

    for(int i=0; i<n; i++){
        if(!q.empty() && q.front() < i) q.pop();

        if(q.size()%2 == nums[i]){
            int j = i+k-1;
            if(j >= n) return -1;

            flip++;
            q.push(j);
        }
    }
    return flip;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the bits in the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int k;
    cout<<"Enter the no. of consecutive bit flip: ";
    cin>>k;

    int ans = minNumberOfKconsutiveBitFlip(nums, k);

    cout<<"Min number of K consecutive bit flip required: "<<ans<<endl;

    return 0;
}