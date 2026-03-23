#include <iostream>
#include <vector>
#include <queue>
using namespace std;


// METHOD 1 (TC -> O(n^2)) using queue
/*
int timeToBuyTickets(vector<int> nums, int k){
    int n = nums.size();
    queue<int> q;
    int time = 0;

    for(int i=0; i<n; i++){
        q.push(i);
    }

    int ticketToBuy = nums[k];

    while(ticketToBuy != 0){
        nums[q.front()]--;
        time++;

        if(q.front() == k) ticketToBuy--;

        if(nums[q.front()] == 0){
            q.pop();
            continue;
        }

        q.push(q.front());
        q.pop();
    }
    return time;
}
*/

int timeToBuyTickets(vector<int> nums, int k){
    int n = nums.size();
    int time = 0;

    for(int i=0; i<n; i++){
        if(i <= k){
            time += min(nums[i], nums[k]);
        }else{
            time += min(nums[k]-1, nums[i]);
        }
    }
    return time;
}

int main(){
    int n;
    cout<<"Enter the total number of people: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the total number of tickets to buy for each people: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int k;
    cout<<"Enter the Nth people whose total time you want to calculate: ";
    cin>>k;

    cout<<"Time taken by Nth people to buy ticket/s: "<<timeToBuyTickets(nums, k)<<endl;

    return 0;
}