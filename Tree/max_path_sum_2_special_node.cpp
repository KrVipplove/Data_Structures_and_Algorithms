// Find the maximum path sum between two special nodes (leaf node)

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

int helper(Node* root, int& maxSum){
    if(!root) return 0;
    if(!root->left && !root->right) return root->data;

    if(!root->left){
        int rightMaxSum = helper(root->right, maxSum);
        return root->data + rightMaxSum;
    }
    if(!root->right){
        int leftMaxSum = helper(root->left, maxSum);
        return root->data + leftMaxSum;
    }

    int leftMaxSum = helper(root->left, maxSum);
    int rightMaxSum = helper(root->right, maxSum);

    int sum = root->data + leftMaxSum + rightMaxSum;
    if(sum > maxSum) maxSum = sum;

    return root->data + max(leftMaxSum, rightMaxSum);
}

int pathSum(Node* root){
    if(!root) return 0;

    int maxSum = INT_MIN;

    int maxDiameterSum = helper(root, maxSum);

    if(maxSum == INT_MIN){
        return maxDiameterSum;
    }

    return maxSum;
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};;

    Node* root = binaryTree(preorder);

    int sum = pathSum(root);

    cout<<"Maximum path sum between two leaf nodes: "<<sum<<endl;

    return 0;
}