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

static int i = -1;
Node* binaryTree(vector<int>& preorder){
    i++;

    if(i >= preorder.size() || preorder[i] == -1){
        return nullptr;
    }

    Node* temp = new Node(preorder[i]);
    temp->left = binaryTree(preorder);
    temp->right = binaryTree(preorder);

    return temp;
}

void leftBoundary(Node* root, vector<int>& ans){
    if(!root) return;
    if(!root->left && !root->right) return;

    ans.push_back(root->data);

    if(root->left){
        leftBoundary(root->left, ans);
    }else{
        leftBoundary(root->right, ans);
    }
}

void leafBoundary(Node* root, vector<int>& ans){
    if(!root) return;

    if(!root->left && !root->right) ans.push_back(root->data);

    leafBoundary(root->left, ans);
    leafBoundary(root->right, ans);
}

void rightBoundary(Node* root, vector<int>& ans){
    if(!root) return;
    if(!root->left && !root->right) return;

    if(root->right){
        rightBoundary(root->right, ans);
    }else{
        rightBoundary(root->left, ans);
    }

    ans.push_back(root->data);
}

vector<int> boundaryTraversal(Node* root){
    if(!root) return {};

    vector<int> ans;

    ans.push_back(root->data);

    leftBoundary(root->left, ans);
    leafBoundary(root->left, ans);
    leafBoundary(root->right, ans);
    rightBoundary(root->right, ans);

    return ans;
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};;

    Node* root = binaryTree(preorder);

    vector<int> ans = boundaryTraversal(root);

    return 0;
}