#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class circularLinkedList{
    Node* head;
    Node* tail;

public:
    circularLinkedList(){
        head = tail = NULL;
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(!tail){
            head = tail = newNode;
            tail->next = newNode;
        }else{
            newNode->next = tail->next;
            tail->next = newNode;
            head = newNode;
        }
    }

    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(!tail){
            head = tail = newNode;
            tail->next = newNode;
        }else{
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead(){
        if(!tail){
            cout<<"List is already empty."<<endl;
            return;
        }else if(head == tail){
            delete tail;
            head = tail = NULL;
        }else{
            tail->next = head->next;
            delete head;
            head = tail->next;
        }        
    }

    void deleteAtTail(){
        if(!tail){
            cout<<"List is already empty."<<endl;
        }else if(head == tail){
            delete tail;
            head = tail = NULL;
        }else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            Node* toDelete = tail;
            tail = temp;
            tail->next = head;
            toDelete->next = NULL;
            delete toDelete;
        }
    }

    void printLinkedList(){
        if(!head) return;

        cout<<head->data<<"->";
        Node* temp = head->next;

        while(temp != head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
};

int main(){
    circularLinkedList cll;

    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.insertAtTail(4);

    cll.deleteAtHead();
    cll.deleteAtHead();
    cll.deleteAtHead();
    cll.deleteAtHead();
    cll.deleteAtHead();

    cll.printLinkedList();


    return 0;
}