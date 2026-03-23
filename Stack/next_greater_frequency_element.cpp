#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

vector<int> nextGreaterFrequencyElement(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> s;

    unordered_map<int, int> freq;
    for(int val : nums) freq[val]++;

    for(int i=0; i<n; i++){

        while(!s.empty() && freq[nums[i]] > freq[nums[s.top()]]){
            ans[s.top()] = nums[i];
            s.pop();
        }
        s.push(i);
    }
    return ans;
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

    vector<int> res = nextGreaterFrequencyElement(nums);

    cout<<"Next Greater Frequency Element: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}