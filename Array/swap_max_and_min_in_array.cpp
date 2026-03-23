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

    int maximum = INT_MIN;
    int minimum = INT_MAX;
    int maxidx=-1, minidx=-1;

    for(int i=0; i<size; i++){
        if(arr[i]>maximum){
            maximum = arr[i];
            maxidx = i;
        }
        if(arr[i]<minimum){
            minimum = arr[i];
            minidx = i;
        }
    }

    swap(arr[minidx],arr[maxidx]);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}