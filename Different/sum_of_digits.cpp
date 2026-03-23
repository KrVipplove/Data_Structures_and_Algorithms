#include <iostream>
using namespace std;

int sumOfdigits(int n){
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        sum += lastdigit;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Sum of digits: "<<sumOfdigits(n)<<endl;
    return 0;
}
