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


// METHOD 1 (using morris traversal)

void flatten(Node* root){
    if(!root) return;

    while(root){
        if(!root->left){
            root = root->right;
        }else{
            Node* temp = root->left;

            while(temp->right) temp = temp->right;

            temp->right = root->right;
            root->right = root->left;
            root->left = nullptr;
        }
    }
}




// METHOD 2 (using recursion)
/*
Node* helper(Node* root){
    if(!root) return nullptr;
    if(!root->left && !root->right) return root;

    Node* leftTail = helper(root->left);
    Node* rightTail = helper(root->right);

    if(leftTail){
        leftTail->right = root->right;
        root->right = root->left;
        root->left = nullptr;
    }

    return rightTail ? rightTail : leftTail;
}

void flatten(Node* root){
    if(!root) return;
    helper(root);
}
*/


int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};;

    Node* root = binaryTree(preorder);
    flatten(root);

    return 0;
}