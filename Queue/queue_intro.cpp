#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};

class Queue{
    Node* head;
    Node* tail;

    public:
    Queue(){
        head = tail = nullptr;
    }

    void push(int x){
        Node* newNode = new Node(x);

        if(head == nullptr){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop(){
        if(head == nullptr) return;

        Node* temp = head;
        head = head->next;

        if(head == nullptr) tail = nullptr;
        
        delete temp;
    }

    int front(){
        if(head == nullptr) return -1;
        return head->data;
    }

    bool empty(){
        return head == nullptr;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}