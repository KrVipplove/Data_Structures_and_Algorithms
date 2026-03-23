#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the square: ";
    cin>>size;

    for(int i=1; i<=size; i++){
        char ch = 'A';
        for(int j=1; j<=size; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}