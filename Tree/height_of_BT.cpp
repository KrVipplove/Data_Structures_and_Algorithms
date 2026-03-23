// Total number of levels in binary tree (height of tree)
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

int heightOfBT(Node* root){
    if(!root) return 0;

    int leftHeight = heightOfBT(root->left);
    int rightHeight = heightOfBT(root->right);

    return 1 + max(leftHeight, rightHeight);
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = binaryTree(preorder);

    int height = heightOfBT(root);
    cout<<"Total number of levels in Binary Tree is: "<<height<<endl;

    return 0;
}