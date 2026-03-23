#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int start=0; start<size; start++){
        for(int end=start; end<size; end++){
            for(int i=start; i<=end; i++){
                cout<<arr[i]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}