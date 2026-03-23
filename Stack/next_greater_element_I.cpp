#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

vector<int> nextGreater(vector<int>& nums1, vector<int>& nums2){
    stack<int> s;
    unordered_map<int,int> m;

    for(int i=0; i<nums2.size(); i++){

        while(!s.empty() && nums2[i] > nums2[s.top()]){
            m[nums2[s.top()]] = nums2[i];
            s.pop();
        }

        s.push(i);
    }

    vector<int> ans(nums1.size());
    for(int i=0; i<nums1.size(); i++){
        if(m.find(nums1[i]) != m.end()){
            ans[i] = m[nums1[i]];
        }else{
            ans[i] = -1;
        }
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array_1: ";
    cin>>n;

    vector<int> nums1(n);
    cout<<"Enter the elements of the array_1: ";
    for(int i=0; i<n; i++){
        cin>>nums1[i];
    }

    int m;
    cout<<"Enter the size of the array_2: ";
    cin>>m;

    vector<int> nums2(m);
    cout<<"Enter the elements of the array_2: ";
    for(int i=0; i<m; i++){
        cin>>nums2[i];
    }

    vector<int> res = nextGreater(nums1, nums2);

    cout<<"Next greater element of nums1[idx] int nums2: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}