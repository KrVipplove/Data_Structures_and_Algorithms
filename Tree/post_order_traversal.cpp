
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

void postOrderTreaversal(Node* root){
    if(root == nullptr) return;

    postOrderTreaversal(root->left);
    postOrderTreaversal(root->right);
    cout<<root->data<<" ";
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = binaryTree(preorder);

    postOrderTreaversal(root);
    cout<<endl;

    return 0;
}