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

int countNonLeafNodes(Node* root){
    if(!root || (!root->left && !root->right)) return 0;

    int leftCount = countNonLeafNodes(root->left);
    int rightCount = countNonLeafNodes(root->right);
    
    return 1 + leftCount + rightCount;
}


// METHOD 2
/*
void helper(Node* root, int& count){
    if(root == nullptr) return;
    
    if(root->left || root->right) count++;
    helper(root->left, count);
    helper(root->right, count);
}

int countNonLeafNodes(Node* root) {
    // Code here
    int count = 0;
    helper(root, count);
    
    return count;
}
*/

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = binaryTree(preorder);

    int nonLeafCount = countNonLeafNodes(root);
    cout<<"Total number of non-leaf nodes in Binary Tree is: "<<nonLeafCount<<endl;

    return 0;
}