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


bool search(Node* root, int key){
    if(!root) return false;

    if(root->data == key) return true;

    if(key < root->data){
        return search(root->left, key);
    }else{
        return search(root->right, key);
    }

    return false;
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

    int key;
    cout<<"Enter the value you want to search: ";
    cin>>key;

    bool flag = search(root, key);
    if(flag == true){
        cout<<key<<" is in this BST"<<endl;
    }else{
        cout<<key<<" is not in this BST"<<endl;
    }

    cout<<"Inorder traversal of tree: ";
    printInorder(root);
    cout<<endl;

    return 0;
}