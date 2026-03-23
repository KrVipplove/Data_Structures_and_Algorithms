#include <iostream>
using namespace std;

void selectionSort(int arr[]){
    int n = sizeof(arr);
    for(int i=0; i<n-1; i++){
        int smallestIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    selectionSort(arr);
    cout<<"Sorted array: ";
    printArray(arr,n);

    cout<<endl;

    return 0;
}