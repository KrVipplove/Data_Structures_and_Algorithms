// BINARY TREE CREATION LEVEL WISE

#include <iostream>
#include <queue>
using namespace std;

// structing the Node
struct Node{
    int data;
    Node* left;
    Node*  right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};

int main(){

    int x, first, second;

    cout<<"Enter the root element: ";
    cin>>x;

    queue<Node*> q;

    // root Node creation
    Node* root = new Node(x);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        // left Node creation
        cout<<"Enter the left child of "<<temp->data<<": ";
        cin>>first;

        if(first != -1){
            temp->left = new Node(first);
            q.push(temp->left);
        }

        // right Node creation
        cout<<"Enter the right child of "<<temp->data<<": ";
        cin>>second;

        if(second != -1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    
    return 0;
}