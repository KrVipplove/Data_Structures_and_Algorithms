#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* random;
    
    Node(int val){
        data = val;
        random = NULL;
        next = NULL;
    }

    Node(int val, Node* temp){
        data = val;
        random = temp;
        next = NULL;
    }
};

Node* cloneLinkedList(Node* head){

    // METHOD 1         (Space Complexity = O(n))
        
    /*
    Node* temp = head;
    
    Node* newHead = NULL;
    Node* newTail = NULL;
    
    unordered_map<Node*, Node*> m;
    
    while(temp){
        Node* newNode = new Node(temp->data);
        if(!newTail){
            newHead = newTail = newNode;
        }else{
            newTail->next = newNode;
            newTail = newTail->next;
        }
        m[temp] = newNode;
        temp = temp->next;
    }
    
    temp = head;
    newTail = newHead;
    
    while(temp){
        newTail->random = m[temp->random];
        temp = temp->next;
        newTail = newTail->next;
    }
    
    return newHead;
    */




    // METHOD 2         (Space Complexity = O(1))
        
    Node* temp = head;
        
    while(temp){
        Node* newNode = new Node(temp->data);
        Node* nextNode = temp->next;
        temp->next = newNode;
        newNode->next = nextNode;
        
        temp = nextNode;
    }
    
    temp = head;
    Node* temp2 = temp->next;
    
    while(temp){
        if(temp->random){
            temp2->random = temp->random->next;
        }else{
            temp2->random = NULL;
        }
        
        temp = temp2->next;
        if(temp){
            temp2 = temp->next;
        }else{
            break;
        }
    }
    
    temp = head;
    temp2 = temp->next;
    Node* newHead = temp2;
    
    while(temp){
        temp->next = temp2->next;
        temp = temp->next;
        
        if(temp){
            temp2->next = temp->next;
        }
        
        temp2 = temp2->next;
    }
    
    return newHead;
}

int main(){

    return 0;
}