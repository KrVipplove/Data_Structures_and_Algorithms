#include <iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;

    int ans = fact(n)/(fact(n-r)*fact(r));

    cout<<"Value of nCr is: "<<ans<<endl;
}