#include <iostream>
using namespace std;

int decToBinary(int n){
    int ans = 0;
    int pow;
    while(n>0){
        int rem = n%2;
        ans = ans + pow*rem;
        n = n/2;
        pow *= 10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;

    cout<<n<<" in binary is: "<<decToBinary(n)<<endl;
    return 0;
}