#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int data){
        this->data = data;
        left = right = nullptr;
        height = 1;
    }
};


int getHeight(Node* root){
    if(!root) return 0;
    else return root->height;
}

int getBalance(Node* root){
    return getHeight(root->left) - getHeight(root->right);
}


Node* leftRotation(Node* root){
    Node* A = root;
    Node* B = root->right;
    Node* temp = B->left;

    B->left = A;
    A->right = temp;

    A->height = 1 + max(getHeight(A->left), getHeight(A->right));
    B->height = 1 + max(getHeight(B->left), getHeight(B->right));
    return B;
}

Node* rightRotation(Node* root){
    Node* A = root;
    Node* B = root->left;
    Node* temp = B->right;

    B->right = A;
    A->left = temp;

    A->height = 1 + max(getHeight(A->left), getHeight(A->right));
    B->height = 1 + max(getHeight(B->left), getHeight(B->right));
    return B;
}


Node* insert(Node* root, int key){
    if(!root) return new Node(key);

    if(key < root->data){
        root->left = insert(root->left, key);
    }else if(key > root->data){
        root->right = insert(root->right, key);
    }else{
        return root;
    }

    // update height;
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // check for balancing;
    int balance = getHeight(root->left) - getHeight(root->right);

    // Left Left case
    if(balance > 1 && key < root->left->data){
        return rightRotation(root);
    }
    // Left Right case
    else if(balance > 1 && key > root->left->data){
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }
    // Right Right case
    else if(balance < -1 && key > root->right->data){
        return leftRotation(root);
    }
    // Right Left case
    else if(balance < -1 && key < root->right->data){
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }
    // already balanced case
    else{
        return root;
    }

}

Node* deleteNode(Node* root, int key) {
    // add code here,
    if(!root) return nullptr;
    
    if(key < root->data){
        root->left = deleteNode(root->left, key);
    }else if(key > root->data){
        root->right = deleteNode(root->right, key);
    }else{
        
        if(!root->right && !root->left){
            delete root;
            return nullptr;
        }else if(!root->right){
            Node* temp = root->left;
            delete root;
            return temp;
        }else if(!root->left){
            Node* temp = root->right;
            delete root;
            return temp;
        }else{
            Node* curr = root->right;
            while(curr->left) curr = curr->left;
            
            root->data = curr->data;
            root->right = deleteNode(root->right, curr->data);
        }
    }
    
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    
    int balance = getBalance(root);
    
    if(balance > 1){
        if(getBalance(root->left) >= 0){
            return rightRotation(root);
        }else{
            root->left = leftRotation(root->left);
            return rightRotation(root);
        }
    }else if(balance < -1){
        if(getBalance(root->right) <= 0 ){
            return leftRotation(root);
        }else{
            root->right = rightRotation(root->right);
            return leftRotation(root);
        }
    }else{
        return root;
    }
}

void printInorder(Node* root){
    if(!root) return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}


int main(){
    Node* root = nullptr;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 5);
    root = insert(root, 100);
    root = insert(root, 95);

    cout<<"Inorder traversal of tree: ";
    printInorder(root);
    cout<<endl;

    root = deleteNode(root, 50);
    printInorder(root);
    cout<<endl;
}