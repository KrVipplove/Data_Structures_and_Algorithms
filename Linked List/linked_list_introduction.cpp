#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){                                              // INSERTION THE FIRST NODE
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){                                               // INSERTING THE LAST NODE
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insert(int val, int pos){                                          // INSERTING IN MIDDLE
        if(pos<0){
            cout<<"Invalid position"<<endl;
            return;
        }else if(pos==0){
            push_front(val);
            return;
        }else{
            Node* temp = head;
            for(int i=0; i<pos-1; i++){
                if(temp==NULL){
                    cout<<"Invalid position"<<endl;
                    return;
                }
                temp = temp->next;
            }
            
            if (temp == NULL) { // also handle case when pos is exactly one beyond last node
                cout << "Invalid position" << endl;
                return;
            }

            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void pop_front(){                                                       // DELETING FIRST NODE
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }else if(head->next == NULL){
            Node* temp = head;
            head = NULL;
            delete temp;
        }else{
            Node *temp = head;
            head = head->next;
            temp->next = NULL;

            delete temp;
        }
    }

    void deleteNode(int x){                                                 // DELETING A PERTICULAR NODE
        if(head == NULL){
            cout<<"List is already empty."<<endl;
            return;
        }
        
        if(x==1){
            pop_front();
            return;
        }

        Node* prev = NULL;
        Node* temp = head;
        x--;

        while(x-- && temp != NULL){
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Position out of range" << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    void pop_back(){                                                        // DELETING THE LAST NODE
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }else if(head->next == NULL){
            Node* temp = head;
            head = NULL;
            delete temp;
        }else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }

    void printLL(){                                                         // PRINTING LINKED LIST
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void search(int key){
        Node* temp = head;
        int idx = 0;
        bool found = false;
        while(temp != NULL){
            if(temp->data == key){
                found = true;
                cout<<key<<" is at position "<<idx<<endl;
            }
            temp = temp->next;
            idx++;
        }
        if(!found){
            cout<<key<<" is not in the linked-list"<<endl;
        }
    }
};

int main(){

    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.insert(6,1);
    ll.printLL();
    ll.deleteNode(1);
    ll.printLL();
    // ll.search(6);

}