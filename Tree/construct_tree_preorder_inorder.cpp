// (Q) -> You are given preorder and inorder. Construct a tree with it.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

Node* buildTree(vector<int>& preorder, vector<int>& inorder, unordered_map<int,int>& m, int start, int end, int& idx){
    if(start > end) return nullptr;

    Node* root = new Node(preorder[idx++]);

    int pos = m[root->data];    // finding the pos of node in inorder for left and right nodes division
    root->left = buildTree(preorder, inorder, m, start, pos-1, idx);
    root->right = buildTree(preorder, inorder, m, pos+1, end, idx);

    return root;
}

void printTreePreorder(Node* root){
    if(!root) return;

    cout<<root->data<<" ";

    printTreePreorder(root->left);
    printTreePreorder(root->right);
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> preorder(n);
    cout<<"Enter the preorder of the tree: ";
    for(int i=0; i<n; i++){
        cin>>preorder[i];
    }

    vector<int> inorder(n);
    cout<<"Enter the inorder of the tree: ";
    for(int i=0; i<n; i++){
        cin>>inorder[i];
    }

    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        m[inorder[i]] = i;
    }
    int start = 0;
    int end = n-1;
    int idx = 0;
    Node* root = buildTree(preorder, inorder, m, start, end, idx);

    cout<<"Preorder-traversal of the tree created: ";
    printTreePreorder(root);
    cout<<endl;

    return 0;
}