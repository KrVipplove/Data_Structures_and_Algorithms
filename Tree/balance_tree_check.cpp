// tree is balanced if the diffecence between leftMaxHeight and rightMaxHeight is <= 1 for every node

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

int heightTree(Node* root){
    if(!root) return 0;

    int leftHeight = heightTree(root->left);
    if(leftHeight == -1) return -1;

    int rightHeight = heightTree(root->right);
    if(rightHeight == -1) return -1;

    if(abs(leftHeight - rightHeight) > 1) return -1;

    return 1 + max(leftHeight, rightHeight);
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};

    Node* root = binaryTree(preorder);

    if(heightTree(root) != -1){
        cout<<"Tree is balanced tree"<<endl;
    }else{
        cout<<"Tree is not balanced"<<endl;
    }

    return 0;
}