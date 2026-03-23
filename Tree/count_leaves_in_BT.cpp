// leaf node is the node which doesn't have any children

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

int countLeafNodes(Node* root){
    if(root == nullptr) return 0;

    if(!root->left && !root->right) return 1;

    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = binaryTree(preorder);

    int leafCount = countLeafNodes(root);
    cout<<"Total number of leaf node/s in binary tree is: "<<leafCount<<endl;

    return 0;
}