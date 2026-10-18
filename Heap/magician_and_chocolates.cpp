#include <iostream>
#include <queue>
using namespace std;

int nChocolates(int A, vector<int>& nums){

    priority_queue<int> p;

    for(int i=0; i<nums.size(); i++)
    p.push(nums[i]);

    long long maxChoc = 0;

    while(A-- && !p.empty()){
        maxChoc += p.top();
        
        if(p.top()/2){
            p.push(p.top()/2);
        }
        p.pop();
    }

    return maxChoc % 1000000007;
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

    int A;
    cout<<"Enter the timer (in second): ";
    cin>>A;

    cout<<"Chocolate eaten in "<<A<<" seconds: "<<nChocolates(A, nums)<<endl;
}