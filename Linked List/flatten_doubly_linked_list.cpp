#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node* child;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
        child = NULL;
    }
};

Node* flatten(Node* head){
    if(head = NULL){
        return head;
    }

    Node* temp = head;

    while(temp){
        if(temp->child){
            Node* nextNode = temp->next;
            temp->next = flatten(temp->child);
            temp->next->prev = temp;
            temp->child = NULL;

            while(temp->next){
                temp = temp->next;
            }
            if(temp->next){
                temp->next = nextNode;
                nextNode->prev = temp;
            }
        }
        temp = temp->next;
    }
    return head;
}

int main(){

    return 0;
}