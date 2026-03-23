#include <iostream>
using namespace std;

int reverse(int n){
    int rev = 0;
    while(n != 0){

        if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;

        rev = rev*10 + n%10;
        n /= 10;
    }
    return rev;
}

bool palindrome(int n){
    if(n<0) return 0;
    return n==reverse(n);
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(palindrome(n)){
        cout<<"It is a palindrome number"<<endl;
    }else{
        cout<<"It is not a palindrome number"<<endl;
    }
    return 0;
}