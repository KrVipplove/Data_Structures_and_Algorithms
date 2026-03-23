#include <iostream>
#include <vector>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
    int totalGas = 0;
    int totalCost = 0;
    int n = gas.size();

    for(int i=0; i<n; i++){
        totalGas += gas[i];
        totalCost += cost[i];
    }

    if(totalCost > totalGas) return -1;

    int start = 0;
    int currGas = 0;
    for(int i=0; i<n; i++){
        currGas += (gas[i] - cost[i]);
        if(currGas < 0){
            currGas = 0;
            start = i+1;
        }
    }
    return start;
}

int main(){
    int n;
    cout<<"Enter the total number of gas station: ";
    cin>>n;

    vector<int> gas(n);
    cout<<"Enter the gas available at i th gas stations: ";
    for(int i=0; i<n; i++){
        cin>>gas[i];
    }

    vector<int> cost(n);
    cout<<"Enter the cost to travel i th to (i+1)th stations: ";
    for(int i=0; i<n; i++){
        cin>>cost[i];
    }

    cout<<"Circuit can be completed from station: "<<canCompleteCircuit(gas, cost)<<endl;
    return 0;
}