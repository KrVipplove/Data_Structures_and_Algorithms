#include <iostream>
using namespace std;

class MaxHeap{
    int * arr;
    int size;   // total element in heap
    int total_size;    // total size of array

public:
    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    // insert into the heap
    void insert(int value){
        if(size >= total_size){
            cout<<"Heap overflow"<<endl;
            return;
        }else{
            arr[size] = value;
            int idx = size;
            size++;

            // compare it with parent and put it to correct position
            while(idx > 0 && arr[(idx-1)/2] < arr[idx]){
                swap(arr[idx], arr[(idx-1)/2]);
                idx = (idx-1)/2;
            }
            cout<<arr[idx]<<" inserted into the Max-Heap"<<endl;
        }
    }

    void Heapify(int idx){
        int left = 2*idx + 1;
        int right = 2*idx + 2;
        int largest = idx;


        if(left < size && arr[left] > arr[idx]) largest = left;
        if(right < size && arr[right] > arr[idx]) largest = right;

        if(largest != idx){
            swap(arr[largest], arr[idx]);
            Heapify(largest);
        }
    }

    void Delete(){
        if(size == 0){
            cout<<"Heap underflow"<<endl;
            return;
        }

        cout<<arr[0]<<" deleted from the heap"<<endl;
        arr[0] = arr[size-1];
        size--;

        if(size == 0){
            return;
        }

        Heapify(0);
    }

    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};

int main(){

    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.print();
    H1.insert(24);
    H1.insert(2);
    H1.insert(7);
    H1.print();
    H1.insert(6);
    H1.print();

    H1.Delete();
    H1.print();
}