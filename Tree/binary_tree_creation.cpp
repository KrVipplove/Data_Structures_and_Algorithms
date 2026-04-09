// BINARY TREE CREATION (using recursion)
// METHOD 1
/*
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};

Node* binaryTree(){
    int x;
    cin>>x;

    if(x==-1){
        return nullptr;
    }

    Node* temp = new Node(x);

    cout<<"Enter the left chid of "<<x<<": ";
    temp->left = binaryTree();

    cout<<"Enter the right child of "<<x<<": ";
    temp->right = binaryTree();

    return temp;
}

int main(){
    cout<<"Enter the root node: ";
    Node* root = binaryTree();

}
*/


// METHOD 2 (if we already have data in vector form);

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

static int idx = -1;
Node* binaryTree(vector<int>& preorder){
    idx++;

    if(idx >= preorder.size() || preorder[idx] == -1){
        return nullptr;
    }

    Node* temp = new Node(preorder[idx]);
    temp->left = binaryTree(preorder);
    temp->right = binaryTree(preorder);

    return temp;
}

void printPreorder(Node* root){
    if(!root) return;

    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};

    Node* root = binaryTree(preorder);

    cout<<"Preorder of created binary tree: ";
    printPreorder(root);
    cout<<endl;

    return 0;
}