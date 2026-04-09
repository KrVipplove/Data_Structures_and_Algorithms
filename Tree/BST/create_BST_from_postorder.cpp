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


Node* createBSTpostorder(vector<int>& postorder, int& idx, int minVal, int maxVal){
    if(idx < 0 || postorder[idx] <= minVal || postorder[idx] >= maxVal){
        return nullptr;
    }

    Node* root = new Node(postorder[idx--]);
    root->right = createBSTpostorder(postorder, idx, root->data, maxVal);
    root->left = createBSTpostorder(postorder, idx, minVal, root->data);

    return root;
}

// printing inorder 
void printInorder(Node* root){
    if(!root) return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
    vector<int> postorder = {1, 4, 7, 6, 3, 13, 14, 10, 8};

    int idx = postorder.size()-1;
    Node* root = createBSTpostorder(postorder, idx, INT_MIN, INT_MAX);

    cout<<"Inorder traversal of tree: ";
    printInorder(root);
    cout<<endl;

    return 0;
}