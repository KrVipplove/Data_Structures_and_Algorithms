// (Q.) Find the number of nodes in Binary Tree


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

// METHOD 1

int sizeOfBinaryTree(Node* root){
    if(!root) return 0;

    return 1 + sizeOfBinaryTree(root->left) + sizeOfBinaryTree(root->right);
}


// METHOD 2
/*
void helper(Node* root, int& count){
    if(!root) return;

    count++;
    helper(root->left, count);
    helper(root->right, count);
}

int sizeOfBinaryTree(Node* root){
    int count = 0;

    helper(root, count);

    return count;
}
*/

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = binaryTree(preorder);

    int size = sizeOfBinaryTree(root);

    cout<<"Total number of nodes in binary tree is/are: "<<size<<endl;

    return 0;
}