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


Node* createBSTpreorder(vector<int>& preorder, int& idx, int minVal, int maxVal){
    if(idx >= preorder.size() || preorder[idx] <= minVal || preorder[idx] >= maxVal){
        return nullptr;
    }

    Node* root = new Node(preorder[idx++]);

    root->left = createBSTpreorder(preorder, idx, minVal, root->data);
    root->right = createBSTpreorder(preorder, idx, root->data, maxVal);

    return root;
}

Node* insert(Node* root, int key){
    // if root == NULL, create node and return it's address
    if(root == nullptr){
        Node* temp = new Node(key);
        return temp;
    }

    // if key is smaller than root go left else go right
    if(key < root->data){
        root->left = insert(root->left, key);
    }else{
        root->right = insert(root->right, key);
    }

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
    vector<int> preorder = {8, 3, 1, 6, 4, 7, 10, 14, 13};

    int idx = 0;
    Node* root = createBSTpreorder(preorder, idx, INT_MIN, INT_MAX);
    
    root = insert(root, 5);

    cout<<"Inorder traversal of new tree: ";
    printInorder(root);
    cout<<endl;

    return 0;
}