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

void sumOfKsmallest(Node* root, int& sum, int& k){
    if(!root) return;

    if(k <= 0) return;

    sumOfKsmallest(root->left, sum, k);
    if(k <= 0) return;
    sum += root->data;
    k--;
    sumOfKsmallest(root->right, sum, k);
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

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    int sum = 0;
    sumOfKsmallest(root, sum, k);

    cout<<"Inorder traversal of tree: ";
    printInorder(root);
    cout<<endl;

    cout<<"Sum of k smallest in tree: "<<sum<<endl;

    return 0;
}