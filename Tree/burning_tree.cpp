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

int helper(Node* root, int target, int& timer){
    if(!root) return 0;

    int left = helper(root->left, target, timer);
    int right = helper(root->right, target, timer);

    if(root->data == target){
        timer = max(left, right);
        return -1;
    }

    if(left < 0){
        timer = max(timer, abs(left) + right);
        return -1 + left;
    }
    if(right < 0){
        timer = max(timer, left + abs(right));
        return -1 + right;
    }

    return 1 + max(left, right);
}

int minTimeToBurnTree(Node* root, int target){
    if(!root) return 0;

    int timer = 0;
    
    helper(root, target, timer);

    return timer;
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};;

    Node* root = binaryTree(preorder);

    int t;
    cout<<"Enter the target node you want to burn: ";
    cin>>t;

    cout<<"Minimum time to burn the whole tree (if node("<<t<<") is burned): "<<minTimeToBurnTree(root, t)<<" sec"<<endl;

    return 0;
}