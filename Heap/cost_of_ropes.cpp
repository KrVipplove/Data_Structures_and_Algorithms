#include <iostream>
#include <vector>
using namespace std;

int minCostRopes(vector<int>& nums, int n){
    priority_queue<int, vector<int>, greater<int>> q;

    for(int i=0; i<n; i++){
        q.push(nums[i]);
    }

    int cost = 0;
    int rope;

    while(q.size() > 1){
        rope = q.top();
        q.pop();
        rope += q.top();
        q.pop();

        cost += rope;

        q.push(rope);
    }
    return cost;
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

    cout<<"Minimum cost for connecting all ropes: "<<minCostRopes(nums, n)<<endl;

    return 0;
}