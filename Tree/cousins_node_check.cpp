#include <iostream>
#include <vector>
#include <queue>
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

bool isCousins(Node* root, int& x, int& y){
    if(x == y) return false;
    if(!root) return false;
    if(root->data == x || root->data == y) return false;

    bool foundX = false;
    bool foundY = false;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        for(int i=0; i<size; i++){
            Node* temp = q.front();
            q.pop();

            if(temp->data == x) foundX = true;
            if(temp->data == y) foundY = true;

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);

            if(temp->left && temp->right){
                if(temp->left->data == x && temp->right->data == y) return false;
                if(temp->left->data == y && temp->right->data == x) return false;
            }
        }
        if(foundX && foundY) return true;
        if(foundX || foundY) return false;
    }
    return false;
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};

    Node* root = binaryTree(preorder);

    int x, y;
    cout<<"Enter the value of two nodes to check for cousions (x and y): ";
    cin>>x>>y;

    if (isCousins(root, x, y)){
        cout<<"Both nodes are cousin"<<endl;
    }else{
        cout<<"Both nodes are not cousin"<<endl;
    }

    return 0;
}