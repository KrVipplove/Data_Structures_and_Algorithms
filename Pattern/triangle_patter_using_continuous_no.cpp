#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of the pattern: ";
    cin>>n;

    int temp=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }
    return 0;
}