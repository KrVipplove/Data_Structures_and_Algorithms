#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int largest = INT_MIN;
    int smallest = INT_MAX;
    int largestIndex = -1;
    int smallestIndex = -1;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
            largestIndex = i;
        }
        if(arr[i]<smallest){
            smallest = arr[i];
            smallestIndex = i;
        }
    }
    cout<<"Largest integer in the array is: "<<largest<<endl;
    cout<<"Smallest integer in the array is: "<<smallest<<endl;
    cout<<"Index of largest integer in the array is: "<<largestIndex<<endl;
    cout<<"Index of smallest integer in the array is: "<<smallestIndex<<endl;
    return 0;
}