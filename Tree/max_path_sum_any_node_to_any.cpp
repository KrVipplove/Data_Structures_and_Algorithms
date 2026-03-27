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

int maxPathSum(Node* root, int& maxSum){
    if(!root) return 0;

    int leftMaxSum = max(0, maxPathSum(root->left, maxSum));
    int rightMaxSum = max(0, maxPathSum(root->right, maxSum));

    int sum = root->data + leftMaxSum + rightMaxSum;
    if(sum > maxSum) maxSum = sum;

    return root->data + max(leftMaxSum, rightMaxSum);
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};;

    Node* root = binaryTree(preorder);

    int maxSum = INT_MIN;
    maxPathSum(root, maxSum);

    cout<<"Maximu path sum between any two node is: "<<maxSum<<endl;

    return 0;
}