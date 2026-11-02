// interview bit
#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>& nums, int k){
    priority_queue<int> p;
    for(int val : nums) p.push(val);

    int maxProfit = 0;

    while(k-- && !p.empty()){
        maxProfit += p.top();

        if(p.top()-1) p.push(p.top()-1);

        p.pop();
    }

    return maxProfit;
}

int main(){
    int n;
    cout<<"Enter the total number of rows: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the total number of empty seats in each row: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int k;
    cout<<"Enter the total number of buyer: ";
    cin>>k;

    cout<<"Maximum profit: "<<solve(nums, k)<<endl;

    return 0;
}