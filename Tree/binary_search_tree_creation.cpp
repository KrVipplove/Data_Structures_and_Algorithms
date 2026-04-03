#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};

Node* insertBinarySearchTree(Node* root, int key){
    if(root == nullptr){
        Node* temp = new Node(key);
        return temp;
    }

    if(key < root->data){
        root->left = insertBinarySearchTree(root->left, key);
    }else{
        root->right = insertBinarySearchTree(root->right, key);
    }

    return root;
}

void printTreeInorder(Node* root){
    if(!root) return;

    printTreeInorder(root->left);
    cout<<root->data<<" ";
    printTreeInorder(root->right);
}

int main(){
    vector<int> vec = {1, 2, 4, 5, 3, 6, 7, 8, 20, 3, 9, 12, 11};

    Node* root = nullptr;

    for(int i=0; i<vec.size(); i++){
        root = insertBinarySearchTree(root, vec[i]);
    }

    printTreeInorder(root);
    cout<<endl;

    return 0;
}