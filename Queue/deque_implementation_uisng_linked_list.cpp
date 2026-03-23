#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int x){
        data = x;
        next = prev = nullptr;
    }
};

class Deque{
    Node* head;
    Node* tail;

    public:
    Deque(){
        head = tail = nullptr;
    }

    void push_front(int x){
        Node* temp = new Node(x);

        if(isEmpty()){
            head = tail = temp;
        }else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    void push_back(int x){
        Node* temp = new Node(x);

        if(isEmpty()){
            head = tail = temp;
        }else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    void pop_front(){
        if(isEmpty()) return;

        Node* temp = head;
        if(head == tail){
            head = tail = nullptr;
        }else{
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

    void pop_back(){
        if(isEmpty()) return;

        Node* temp = tail;
        if(head == tail){
            head = tail = nullptr;
        }else{
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
    }

    void startVal(){
        if(isEmpty()) return;
        cout<<head->data<<endl;
    }

    void backVal(){
        if(isEmpty()) return;
        cout<<tail->data<<endl;
    }

    bool isEmpty(){
        return head==nullptr;
    }

    void printDeque(){
        Node* temp = head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    ~Deque(){
        while(!isEmpty()){
            pop_front();
        }
    }
};

int main(){
    Deque dq;
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
    dq.startVal();
    dq.backVal();
    dq.printDeque();
}