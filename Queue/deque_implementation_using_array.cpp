#include <iostream>
#include <vector>
using namespace std;

class Deque{
    public:
    int *arr;
    int front;
    int rear;
    int n;

    Deque(int x){
        arr = new int[x];
        front = rear = -1;
        n = x;
    }

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(){
        return (rear+1)%n == front;
    }

    void push_front(int x){
        if(isFull()){
            cout<<"Deque is already full"<<endl;
            return;
        }

        if(isEmpty()){
            front = rear = 0;
        }else{
            front = (front-1+n)%n;
        }

        arr[front] = x;
    }

    void push_back(int x){
        if(isFull()){
            cout<<"Deque is already full"<<endl;
            return;
        }
        
        if(isEmpty()){
            front = rear = 0;
        }else{
            rear = (rear+1)%n;
        }

        arr[rear] = x;
    }

    void pop_front(){
        if(isEmpty()){
            cout<<"Deque is already empty"<<endl;
            return;
        }
        if(front == rear){
            front = rear = -1;
        }else{
            front = (front+1)%n;
        }
    }

    void pop_back(){
        if(isEmpty()){
            cout<<"Deque is already empty"<<endl;
            return;
        }
        if(front == rear){
            front = rear = -1;
        }else{
            rear = (rear-1+n)%n;
        }
    }

    void frontVal(){
        if(isEmpty()){
            cout<<"Deque is empty"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
    }

    void backVal(){
        if(isEmpty()){
            cout<<"Deque is empty"<<endl;
            return;
        }
        cout<<arr[rear]<<endl;
    }
};

int main(){
    Deque dq(10);
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_back(6);
    dq.push_front(69);
    dq.push_front(68);
    dq.push_front(67);
    dq.pop_back();
    dq.pop_front();
    dq.frontVal();
    dq.backVal();
}