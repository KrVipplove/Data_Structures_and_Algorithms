#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* pre;

    Node(int value){
        data = value;
        next = pre = NULL;
    }
};

class doublyList{
    Node* head;
    Node* tail;

public:
    doublyList(){
        head = tail = NULL;
    }

    void push_front(int val){                                     // PUSH FRONT
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            head->pre = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){                                        // PUSH BACK
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->pre = tail;
            tail = newNode;
        }
    }

    void pop_front(){                                               // POP FRONT
        if(head==NULL){
            cout<<"List is already empty."<<endl;
            return;
        }else if(head->next == NULL){
            Node* temp = head;
            head = tail = NULL;
            delete temp;
        }else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            head->pre = NULL;
            delete temp;
        }
    }

    // void pop_front(){                                        // POP BACK         (DIDI KA CODE)
    //     if(head == NULL){
    //         cout << "DLL is empty\n";
    //         return;
    //     }

    //     Node* temp = head;
    //     head = head->next;

    //     if (head != NULL) {
    //         head->pre = NULL;
    //     }

    //     temp->next = NULL;
    //     delete temp;
    // }

    void pop_back(){                                        // POP BACK
        if(head == NULL){
            cout<<"List is already empty."<<endl;
            return;
        }

        Node* temp = tail;

        if(head == tail){
            head = tail = NULL;
        }else{
            tail = tail->pre;
            tail->next = NULL;
            temp->pre = NULL;
        }

        delete temp;
    }

    void insert(int val, int pos){                                      // INSERT IN MIDDLE
        if(head == NULL){
            Node* newNode = new Node(val);
            head = tail = newNode;
        }else if(pos == 0){
            push_front(val);
        }else{
            Node* newNode = new Node(val);
            Node* temp = head;
            while(--pos){
                temp = temp->next;
            }
            if(temp->next == NULL){
                push_back(val);
            }else{
                newNode->next = temp->next;
                newNode->pre = temp;
                newNode->next->pre = newNode;
                temp->next = newNode;
            }
        }
    }

    void deleteNode(int pos){                                          // DELETE IN MIDDLE
        if(!head){
            cout<<"List is already empty."<<endl;
            return;
        }
        if(pos==0){
            pop_front();
            return;
        }
        
        Node* temp = head;
        while(temp->next && --pos){
            temp = temp->next;
        }
        if (temp->next == NULL) {
            cout << "Invalid position." << endl;
            return;
        }

        if(temp->next == tail){
            pop_back();
        }else{
            Node* toDelete = temp->next;
            temp->next = toDelete->next;
            toDelete->next->pre = temp;
            toDelete->next = toDelete->pre = NULL;
            delete toDelete;
        }   
    }

    void display(){
        // if(head == NULL){
        //     cout<<"NULL"<<endl;
        // }
        Node* temp = head;
        cout<<"NULL <=> ";
        while(temp){
            cout<<temp->data<<" <=> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void displayReverse() {
        Node* temp = tail;
        cout << "NULL <=> ";
        while (temp) {
            cout << temp->data << " <=> ";
            temp = temp->pre;
        }
        cout << "NULL" << endl;
    }
    
};

int main(){

    doublyList dll;
    // dll.push_front(1);
    // dll.push_front(2);
    // dll.push_front(3);

    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_back(4);
    dll.pop_front();
    dll.push_back(5);
    dll.pop_back();

    dll.display();
    dll.displayReverse();

    return 0;
}