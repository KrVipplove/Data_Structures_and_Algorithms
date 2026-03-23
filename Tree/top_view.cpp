#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <climits>
using namespace std;

// structuring data type
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

// binary tree creation;
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

// finding the position of leftmost and rightmost node
void findPosition(Node* root, int pos, int& left, int& right){
    if(!root) return;

    if(pos < left) left = pos;
    if(pos > right) right = pos;

    findPosition(root->left, pos-1, left, right);
    findPosition(root->right, pos+1, left, right);
}

// METHOD 1 (using level order traversal)
/*
vector<int> topView(Node* root){
    if(!root) return {};
    int left = 0;
    int right = 0;
    findPosition(root, 0, left, right);            // finding correct positions of left and right

    vector<int> ans(right - left + 1);          // initialising ans with correct size
    vector<bool> visited(right - left + 1, false);   // for tracking if any idx is visited or not

    queue<pair<Node*, int>> q;          // using queue of pairs with position of node
    q.push({root, -left});

    while(!q.empty()){
        Node* temp = q.front().first;
        int pos = q.front().second;
        q.pop();

        if(!visited[pos]){
            visited[pos] = true;
            ans[pos] = temp->data;
        }

        if(temp->left) q.push({temp->left,pos-1});
        if(temp->right) q.push({temp->right,pos+1});
    }
    return ans;
}
*/



// METHOD 2 (using recursion)

void helper(Node* root, int idx, int level, vector<int>& arrLevel, vector<int>& ans){
    if(!root) return;

    // picking the node whose level is minimum on every idx
    if(level < arrLevel[idx]){
        arrLevel[idx] = level;
        ans[idx] = root->data;
    }

    helper(root->left, idx-1, level+1, arrLevel, ans);
    helper(root->right, idx+1, level+1, arrLevel, ans);
}

vector<int> topView(Node* root){
    if(!root) return {};

    int left = 0;
    int right = 0;
    findPosition(root, 0, left, right);

    vector<int> ans(right - left + 1);
    vector<int> arrLevel(right - left + 1, INT_MAX);

    helper(root, -left, 0, arrLevel, ans);

    return ans;
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};;

    Node* root = binaryTree(preorder);

    vector<int> res = topView(root);
    cout<<"Top View of binary tree: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}