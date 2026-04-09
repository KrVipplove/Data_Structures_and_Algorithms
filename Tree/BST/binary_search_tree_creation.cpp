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

Node* insertBinarySearchTree(Node* root, int key){
    if(root == nullptr){
        Node* temp = new Node(key);
        return temp;
    }

    if(key < root->data){
        root->left = insertBinarySearchTree(root->left, key);
    }else{
        root->right = insertBinarySearchTree(root->right, key);
    }

    return root;
}

void printTreeInorder(Node* root){
    if(!root) return;

    printTreeInorder(root->left);
    cout<<root->data<<" ";
    printTreeInorder(root->right);
}

int main(){
    vector<int> vec = {1, 2, 4, 5, 3, 6, 7, 8, 20, 3, 9, 12, 11};

    Node* root = nullptr;

    for(int i=0; i<vec.size(); i++){
        root = insertBinarySearchTree(root, vec[i]);
    }

    printTreeInorder(root);
    cout<<endl;

    return 0;
}





// CREATE BINARY SEARCH TREE USING PREORDER
/*

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

    cout<<"Inorder traversal of tree: ";
    printInorder(root);
    cout<<endl;

    return 0;
}

*/