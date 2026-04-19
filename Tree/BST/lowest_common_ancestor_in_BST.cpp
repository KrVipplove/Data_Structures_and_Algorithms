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

Node* findLCA(Node* root, int a, int b){
    if(!root) return nullptr;

    if(root->data > a && root->data > b){
        return findLCA(root->left, a , b);
    }else if(root->data < a && root->data < b){
        return findLCA(root->right, a, b);
    }else{
        return root;
    }
}

int main(){
    vector<int> preorder = {8, 3, 1, 6, 4, 7, 10, 14, 13};

    int idx = 0;
    Node* root = createBSTpreorder(preorder, idx, INT_MIN, INT_MAX);

    int a, b;
    cout<<"Enter the nodes value of which you want to find LCA (with space): ";
    cin>>a>>b;

    Node* LCA = findLCA(root, a, b);

    if(LCA){
        cout<<"LCA of "<<a<<" and "<<b<<" is: "<<LCA->data<<endl;
    }else{
        cout<<"LCA doesn't exists"<<endl;
    }

    return 0;
}