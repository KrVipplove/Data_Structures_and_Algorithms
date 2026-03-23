#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* bottom;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
        bottom = NULL;
    }
};

Node* merge(Node* head1, Node* head2){
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;
    
    if(head1->data <= head2->data){
        head1->bottom = merge(head1->bottom, head2);
        return head1;
    }else{
        head2->bottom = merge(head1, head2->bottom);
        return head2;
    }
}

Node *flatten(Node *root) {
    if(!root || !root->next) return root;
    
    root->next = flatten(root->next);
    
    return merge(root, root->next);
}

int main(){

    return 0;
}