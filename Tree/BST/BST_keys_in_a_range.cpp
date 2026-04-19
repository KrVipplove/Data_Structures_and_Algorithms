// Q. Print all the elements in the range low to high of BST

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

// METHOD 1
/*
void printNearNodes(Node* root, int low, int high, vector<int>& ans){
    if(!root) return;

    if(root->data > high){
        printNearNodes(root->left, low, high, ans);
    }else if(root->data < low){
        printNearNodes(root->right, low, high, ans);
    }else{
        printNearNodes(root->left, low, high, ans);
        ans.push_back(root->data);
        printNearNodes(root->right, low, high, ans);
    }
}
*/

// METHOD 2
void printNearNodes(Node* root, int low, int high, vector<int>& ans){
    if(!root) return;

    if(root->data > low){
        printNearNodes(root->left, low, high, ans);
    }
    if(root->data >= low && root->data <= high){
        ans.push_back(root->data);
    }
    if(root->data < high){
        printNearNodes(root->right, low, high, ans);
    }
}

int main(){
    vector<int> preorder = {8, 3, 1, 6, 4, 7, 10, 14, 13};

    int idx = 0;
    Node* root = createBSTpreorder(preorder, idx, INT_MIN, INT_MAX);

    int low, high;
    cout<<"Enter the lower and higher limit (with space): ";
    cin>>low>>high;

    vector<int> ans;
    printNearNodes(root, low, high, ans);
    cout<<"Element/s in range "<<low<<" to "<<high<<" is/are: ";
    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}