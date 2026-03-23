// #include <iostream>
// using namespace std;

// int GCD(int a, int b){
//     int gcd = 1;
//     for(int i=1; i <= min(a,b); i++){
//         if(a%i == 0 && b%i==0){
//             gcd = i;
//         }
//     }
//     return gcd;
// }

// int main(){
//     int a;
//     cout<<"Enter the first number: ";
//     cin>>a;

//     int b;
//     cout<<"Enter the second number: ";
//     cin>>b;

//     cout<<"GCD of "<<a<<" and "<<b<<" is: "<<GCD(a,b)<<endl;
//     return 0;
// }



// Optimised version
#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    return a==0 ? b : a;
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;

    int b;
    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"HCF of "<<a<<" and "<<b<<" is: "<<gcd(a,b)<<endl;
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm(a,b)<<endl;
    return 0;
}