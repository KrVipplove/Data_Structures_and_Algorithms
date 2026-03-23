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

bool isSymmetric(Node* p, Node* q){
    if(!p && !q) return true;

    if((!p && q) || (p && !q)) return false;
    if(p->data != q->data) return false;

    return isSymmetric(p->left, q->right) && isSymmetric(p->right, q->left);
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = binaryTree(preorder);

    if(!root || isSymmetric(root->left, root->right)){
        cout<<"Tree is symmetric"<<endl;
    }else{
        cout<<"Tree is not symmetric"<<endl;
    }

    return 0;
}