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


Node* deleteNode(Node* root, int key){
    if(!root) return nullptr;

    if(root->data == key){
        // if node has only left child
        if(!root->right){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // if node has only right child
        if(!root->left){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // else node has both children
        Node* temp = root->left;
        Node* prev = root;

        while(temp->right){
            prev = temp;
            temp = temp->right;
        }

        if(prev != root){           // if left child itself is rightmost (predecessor)
            prev->right = temp->left;
            temp->left = root->left;
        }
        temp->right = root->right;
        delete root;
        return temp;
    }

    if(key < root->data){
        root->left = deleteNode(root->left, key);
    }else{
        root->right = deleteNode(root->right, key);
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

    int key;
    cout<<"Enter the val of node you want to delete: ";
    cin>>key;

    root = deleteNode(root, key);

    cout<<"Inorder traversal of tree: ";
    printInorder(root);
    cout<<endl;

    return 0;
}