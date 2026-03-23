#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySumCount(vector<int>& nums, int k){
    int n = nums.size();
    int count = 0;

    vector<int> presum(n,0);
    presum[0] = nums[0];
    for(int i=1; i<n; i++){
        presum[i] = presum[i-1] + nums[i];
    }

    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        if(presum[i] == k) count++;
        int val = presum[i] - k;
        if(m.find(val) != m.end()){
            count += m[val];
        }

        if(m.find(presum[i]) == m.end()){
            m[presum[i]] = 0;
        }
        m[presum[i]]++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    int k;
    cout<<"Enter the target sum of subarray: ";
    cin>>k;

    cout<<"Total number of subarray sum equals to "<<k<<" is: "<<subarraySumCount(nums,k)<<endl;
    return 0;
}