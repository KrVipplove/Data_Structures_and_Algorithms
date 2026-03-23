#include <iostream>
using namespace std;

int factorialN(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Facorial of "<<n<<" is: "<<factorialN(n)<<endl;
}