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

Node* binaryTree(vector<int>& preorder, int &idx){
    idx++;

    if(idx >= preorder.size() || preorder[idx] == -1){
        return nullptr;
    }

    Node* temp = new Node(preorder[idx]);
    temp->left = binaryTree(preorder, idx);
    temp->right = binaryTree(preorder, idx);

    return temp;
}

Node* LCA(Node* root, int p, int q){
    if(!root) return nullptr;

    if(root->data == p || root->data == q) return root;
    Node* leftLCA = LCA(root->left, p, q);
    Node* rightLCA = LCA(root->right, p, q);

    if(leftLCA && rightLCA) return root;
    return leftLCA? leftLCA : rightLCA;
}

void printPreorder(Node* root){
    if(!root) return;

    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};

    int idx = -1;
    Node* root = binaryTree(preorder, idx);

    int p, q;
    cout<<"Enter the value of both nodes to find LCA: ";
    cin>>p>>q;

    Node* nodeLCA = LCA(root, p, q);
    cout<<"Lowest common LCA of "<<p<<" & "<<q<<": "<<nodeLCA->data<<endl;

    return 0;
}