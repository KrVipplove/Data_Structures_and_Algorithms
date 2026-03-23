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
        int sum = 0;
        for(int end=start; end<size; end++){
            sum = sum + arr[end];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}