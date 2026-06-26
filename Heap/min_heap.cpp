#include <iostream>
using namespace std;

class MinHeap{
    int *arr;
    int size;
    int total_size;

public:
    MinHeap(int value){
        arr = new int[value];
        size = 0;
        total_size = value;
    }

    void insert(int data){
        if(size >= total_size){
            cout<<"Heap Overflow";
            return;
        }else{
            int idx = size;
            arr[idx] = data;
            size++;

            // put inserted data to it's correct position;
            while(idx > 0 && arr[(idx-1)/2] > arr[idx]){
                swap(arr[idx], arr[(idx-1)/2]);
                idx = (idx-1)/2;
            }
            cout<<arr[idx]<<" inserted into Min-Heap"<<endl;
        }
    }

    void Heapify(int idx){
        int left = 2*idx + 1;
        int right = 2*idx + 2;
        int smallest = idx;

        if(left < size && arr[left] < arr[smallest]) smallest = left;
        if(right < size && arr[right] < arr[smallest]) smallest = right;

        if(smallest != idx){
            swap(arr[smallest], arr[idx]);
            Heapify(smallest);
        }
    }

    void Delete(){
        if(size == 0){
            cout<<"Heap Underflow"<<endl;
            return;
        }
        
        cout<<arr[0]<<" deleted from the heap"<<endl;
        arr[0] = arr[size-1];
        size--;

        if(size == 0) return;

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
    MinHeap H1(6);
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