// Q) check if the given input is a binary tree or not
#include <iostream>
#include <vector>
#include <climits>
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


Node* createBSTpreorder(vector<int>& preorder, int& idx, long long minVal, long long maxVal){
    if(idx >= preorder.size() || preorder[idx] <= minVal || preorder[idx] >= maxVal){
        return nullptr;
    }

    Node* root = new Node(preorder[idx++]);

    root->left = createBSTpreorder(preorder, idx, minVal, root->data);
    root->right = createBSTpreorder(preorder, idx, root->data, maxVal);

    return root;
}

// printing inorder 
void printInorder(Node* root){
    if(!root) return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}


bool checkBST(Node* root, long long minVal, long long maxVal){
    if(!root) return true;

    if(root->data <= minVal || root->data >= maxVal) return false;

    bool left = checkBST(root->left, minVal, root->data);
    bool right = checkBST(root->right, root->data, maxVal);

    return left && right;
}


int main(){
    vector<int> preorder = {8, 3, 1, 6, 4, 7, 10, 14, 13};

    int idx = 0;
    Node* root = createBSTpreorder(preorder, idx, LLONG_MIN, LLONG_MAX);

    if(checkBST(root, LLONG_MIN, LLONG_MAX)){
        cout<<"Input tree is a Binary Search Tree"<<endl;
    }else{
        cout<<"Input tree is not a Binary Search Tree"<<endl;
    }

    cout<<"Inorder traversal of tree: ";
    printInorder(root);
    cout<<endl;

    return 0;
}