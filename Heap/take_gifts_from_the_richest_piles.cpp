// leetcode 2558
#include <iostream>
#include <vector>
using namespace std;

int pickGifts(vector<int>& gifts, int k){
    priority_queue<int> p;

    for(int val : gifts) p.push(val);

    while(k-- && !p.empty()){
        int biggestPile = p.top();
        p.pop();

        int remainingGifts = sqrt(biggestPile);

        p.push(remainingGifts);
    }

    int totalRemaining = 0;
    while(!p.empty()){
        totalRemaining += p.top();
        p.pop();
    }
    
    return totalRemaining;
}

int main(){
    int n;
    cout<<"Enter the total number of piles: ";
    cin>>n;

    vector<int> gifts(n);
    cout<<"Enter the total number of gifts in each piles: ";
    for(int i=0; i<n; i++){
        cin>>gifts[i];
    }

    int k;
    cout<<"Enter the time in second: ";
    cin>>k;

    cout<<"Remaining gifts after "<<k<<" second/s: "<<pickGifts(gifts, k)<<endl;

    return 0;
}