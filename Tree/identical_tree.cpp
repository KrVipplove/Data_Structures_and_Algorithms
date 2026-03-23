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

bool isIdentical(Node* p, Node* q){
    if(!p && !q) return true;

    if((!p && q) || (p && !q)) return false;

    if(p->data != q->data) return false;

    return isIdentical(p->left, q->left) && isIdentical(p->right, q->right);
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root1 = binaryTree(preorder);
    idx = -1;
    Node* root2 = binaryTree(preorder);

    if(isIdentical(root1, root2)){
        cout<<"Both trees are identical"<<endl;
    }else{
        cout<<"Both tree are not identical"<<endl;
    }

    return 0;
}