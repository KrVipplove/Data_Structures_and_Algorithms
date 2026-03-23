// Q. Construct tree using postorder and inorder
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

Node* buildTree(vector<int>& postorder, vector<int>& inorder, unordered_map<int,int>& m, int start, int end, int& idx){
    if(start > end) return nullptr;

    Node* root = new Node(postorder[idx--]);

    int pos = m[root->data];

    root->right = buildTree(postorder, inorder, m, pos+1, end, idx);
    root->left = buildTree(postorder, inorder, m, start, pos-1, idx);
    
    return root;
}

void printTree(Node* root){
    if(!root) return;

    printTree(root->left);
    printTree(root->right);
    cout<<root->data<<" ";
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> postorder(n), inorder(n);

    cout<<"Enter the postorder traversal: ";
    for(int i=0; i<n; i++){
        cin>>postorder[i];
    }

    cout<<"Enter the inorder traversal: ";
    for(int i=0; i<n; i++){
        cin>>inorder[i];
    }

    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        m[inorder[i]] = i;
    }

    int start = 0;
    int end = n-1;
    int idx = n-1;

    Node* root = buildTree(postorder, inorder, m, start, end, idx);

    cout<<"Postorder-traversal of the new tree: ";
    printTree(root);
    cout<<endl;

    return 0;
}