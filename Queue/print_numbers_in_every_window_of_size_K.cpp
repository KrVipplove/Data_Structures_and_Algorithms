#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void displayWindow(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

void printNumbersInEveryWindowOfSizeK(vector<int>& nums, int k){
    int n = nums.size();

    queue<int> q;
    for(int i=0; i<k-1; i++){
        q.push(nums[i]);
    }

    for(int i=k-1; i<n; i++){
        q.push(nums[i]);
        displayWindow(q);
        q.pop();
    }
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

    int k;
    cout<<"Enter the window size: ";
    cin>>k;

    printNumbersInEveryWindowOfSizeK(nums, k);

    return 0;
}