#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int productOfArray(int arr[], int size){
    int product = 1;
    for(int i=0; i<size; i++){
        product *= arr[i];
    }
    return product;
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Sum of elements in the array: "<<sumOfArray(arr,size)<<endl;
    cout<<"Product of elements in the array: "<<productOfArray(arr,size)<<endl;
    return 0;
}