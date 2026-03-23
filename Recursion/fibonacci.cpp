#include <iostream>
using namespace std;


// METHOD 1
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+ fib(n-2);
}

// METHOD 2
// int fib2(int n){
//     vector<int> nums(n+1);
//     nums[0]=0;
//     nums[1]=1;
//     for(int i=2; i<=n; i++){
//         nums[i] = nums[i-1] + nums[i-2];
//     }
//     return nums[n];
// }

int main(){
    int n;
    cout<<"Enter the (n)th term: ";
    cin>>n;

    cout<<"Nth term of fibonacci series is: "<<fib(n)<<endl;
    return 0;
}