// leetcode 1046
#include <iostream>
#include <vector>
using namespace std;

int lastStoneWeight(vector<int>& stones, int n){
    priority_queue<int> p;
    
    for(int val : stones) p.push(val);

    while(p.size() > 1){
        int first = p.top();
        p.pop();

        int second = p.top();
        p.pop();

        if(first != second) p.push(first-second);
    }

    return p.empty() ? 0 : p.top();
}

int main(){
    int n;
    cout<<"Enter the total number of stones: ";
    cin>>n;

    vector<int> stones(n);
    cout<<"Enter the weight of each stones: ";
    for(int i=0; i<n; i++){
        cin>>stones[i];
    }

    cout<<"Weight of last stone left is: "<<lastStoneWeight(stones, n)<<endl;

    return 0;
}