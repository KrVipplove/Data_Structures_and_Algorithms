#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int sum = 0;
    int temp = n;
    while(n>0){
        int dig = n%10;
        sum += (dig*dig*dig);
        n /= 10;
    }
    return sum==temp;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(isArmstrong(n)){
        cout<<"It is an Armstrong number."<<endl;
    }else{
        cout<<"It is not an Armstrong number: "<<endl;
    }
    return 0;
}