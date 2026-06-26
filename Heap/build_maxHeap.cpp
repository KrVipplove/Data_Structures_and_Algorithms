#include <iostream>
using namespace std;

void Heapify(vector<int>& arr, int idx, int n){
    int largest = idx;
    int left = 2*idx + 1;
    int right = 2*idx + 2;

    if(left < n && arr[left] > arr[largest]) largest = left;
    if(right < n && arr[right] > arr[largest]) largest = right;

    if(largest != idx){
        swap(arr[largest], arr[idx]);
        Heapify(arr, largest, n);
    }
}

void buildMaxHeap(vector<int>& arr, int n){
    for(int i = n/2 - 1; i >= 0; i--){
        Heapify(arr, i, n);
    }
}

void printHeap(vector<int>& arr, int n){
    cout<<"Heap: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    buildMaxHeap(arr, n);
    printHeap(arr, n);

    return 0;
}