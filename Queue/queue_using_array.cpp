#include <iostream>
#include <vector>
using namespace std;

class Queue{
    int *arr;
    int front, rear, size;

    public:

    Queue(int n){
        arr = new int[n];
        front = rear = -1;
        size = n;
    }

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(){
        return (rear+1)%size == front;
    }

    void enqueue(int x){
        if(isEmpty()){
            front = rear = 0;
            arr[0] = x;
        }else if(isFull()){
            cout<<"Queue is already full"<<endl;
        }else{
            rear = (rear+1)%size;
            arr[rear] = x;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is already empty"<<endl;
            return;
        }

        if(front == rear){
            front = rear = -1;
        }else{
            front = (front+1)%size;
        }
    }

    int getFront(){
        if(isEmpty()) return -1;
        return arr[front];
    }

    int getRear(){
        if(isEmpty()) return -1;
        return arr[rear];
    }
};

int main(){
    Queue Q(5);
    Q.enqueue(1);
    cout<<Q.getRear()<<endl;
    Q.enqueue(2);
    cout<<Q.getRear()<<endl;
    Q.enqueue(3);
    cout<<Q.getRear()<<endl;
    Q.dequeue();
    cout<<Q.getRear()<<endl;
    Q.enqueue(4);
    cout<<Q.getRear()<<endl;
    Q.enqueue(5);
    cout<<Q.getRear()<<endl;

    return 0;
}