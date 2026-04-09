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

void minDiffInBSTnodes(Node* root, int& minVal, Node*& prev){
    if(!root) return;

    minDiffInBSTnodes(root->left, minVal, prev);
    if(prev){
        minVal = min(minVal, root->data - prev->data);
    }
    prev = root;
    minDiffInBSTnodes(root->right, minVal, prev);
}

int main(){
    vector<int> preorder = {8, 3, 1, 6, 4, 7, 10, 14, 13};

    int idx = 0;
    Node* root = createBSTpreorder(preorder, idx, INT_MIN, INT_MAX);

    Node* prev = nullptr;
    int minVal = INT_MAX;
    minDiffInBSTnodes(root, minVal, prev);
    cout<<"Minimum distance between any two nodes: "<<minVal<<endl;

    cout<<"Inorder traversal of tree: ";
    printInorder(root);
    cout<<endl;

    return 0;
}