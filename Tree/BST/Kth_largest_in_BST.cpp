#include <iostream>
#include <vector>
#include <climits>
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

void KthLargest(Node* root, int& k, int& ans){
    if(!root) return;
    if(k <= 0) return;

    KthLargest(root->right, k, ans);
    if(k <= 0) return;
    if(k-- == 1){
        ans = root->data;
        return;
    }
    KthLargest(root->left, k, ans);
}

int main(){
    vector<int> preorder = {8, 3, 1, 6, 4, 7, 10, 14, 13};

    int idx = 0;
    Node* root = createBSTpreorder(preorder, idx, INT_MIN, INT_MAX);

    int k;
    cout<<"Enter the value of K: ";
    cin>>k;

    int ans = -1;
    KthLargest(root, k, ans);
    cout<<"Kth largest element in tree: "<<ans<<endl;

    cout<<"Inorder traversal of tree: ";
    printInorder(root);
    cout<<endl;

    return 0;
}