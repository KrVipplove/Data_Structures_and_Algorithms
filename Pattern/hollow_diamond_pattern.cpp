#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enterr the side of the pattern: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        cout<<"* ";
        for(int j=1; j<=2*i-3; j++){
            if(i!=1){
                cout<<"  ";
            }
        }
        if(i!=1){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        cout<<"* ";
        for(int j=1; j<=2*i-3; j++){
            if(i!=1){
                cout<<"  ";
            }
        }
        if(i!=1){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}