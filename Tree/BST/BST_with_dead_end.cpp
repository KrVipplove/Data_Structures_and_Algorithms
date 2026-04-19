// Q. Check if the BST contains dead end or not
// You are given a BST containing unique positive integers greater than 0.
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

bool isDeadEnd(Node* root, int minVal, int maxVal){
    if(!root) return false;

    if(!root->left && !root->right){
        if(root->data - minVal == 1 && maxVal - root->data == 1){
            return true;
        }else{
            return false;
        }
    }

    bool left = isDeadEnd(root->left, minVal, root->data);
    bool right = isDeadEnd(root->right, root->data, maxVal);

    return left || right;
}

int main(){
    vector<int> preorder = {8, 3, 1, 6, 4, 7, 10, 14, 13};

    int idx = 0;
    Node* root = createBSTpreorder(preorder, idx, INT_MIN, INT_MAX);

    if(isDeadEnd(root, 0, INT_MAX)){
        cout<<"BST contains dead end"<<endl;
    }else{
        cout<<"BST doesn't contains dead end"<<endl;
    }

    return 0;
}

// Q. Find common nodes in two BST