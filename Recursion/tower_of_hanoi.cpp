#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void towerOfHanoi(int n, int source, int helper, int dest){

    if(n==1){
        cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;
        return;
    }

    towerOfHanoi(n-1,source, dest, helper);
    cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;
    towerOfHanoi(n-1, helper, source, dest);
}

int main(){
    int n;
    cout<<"Enter the total number of disk: ";
    cin>>n;

    int source = 1;
    int helper = 2;
    int destination = 3;

    towerOfHanoi(n, source, helper, destination);

    cout<<"Number of moves needes to complete the task: "<<pow(2,n)-1<<endl;

    return 0;
}