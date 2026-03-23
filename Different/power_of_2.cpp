#include <iostream>
using namespace std;

bool isPowOf2(int n){
    if((n & (n-1))!=0){
        return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(isPowOf2(n)){
        cout<<n<<" is a power of two."<<endl;
    }else{
        cout<<n<<" is not a power of two."<<endl;
    }
    return 0;
}