#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=2; i<=n; i++){
        if(isPrime(i)==true){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}