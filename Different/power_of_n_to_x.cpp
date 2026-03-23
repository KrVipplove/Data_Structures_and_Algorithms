#include <iostream>
using namespace std;

int power(int n, int p){
    long binaryform = p;
    int ans = 1;
    while(binaryform>0){
        if(binaryform%2==1){
            ans *= n;
        }
        binaryform/=2;
        n *= n;
    }
    return ans;
}

int main(){
    int n, p;
    cout<<"Enter base and power: ";
    cin>>n>>p;

    cout<<"Result: "<<power(n,p)<<endl;
    return 0;
}