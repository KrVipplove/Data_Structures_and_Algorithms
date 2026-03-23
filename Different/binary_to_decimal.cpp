#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int pow = 1;

    while(n>0){
        int lastdigit = n%10;
        ans = lastdigit*pow + ans;
        n = n/10;
        pow *= 2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Binary number: ";
    cin>>n;
    cout<<n<<" in Decimal is: "<<binaryToDecimal(n)<<endl;

    return 0;
}