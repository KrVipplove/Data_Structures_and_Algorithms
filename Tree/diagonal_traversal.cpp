#include <iostream>
#include <vector>
#include <queue>
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

static int i = -1;
Node* binaryTree(vector<int>& preorder){
    i++;

    if(i >= preorder.size() || preorder[i] == -1){
        return nullptr;
    }

    Node* temp = new Node(preorder[i]);
    temp->left = binaryTree(preorder);
    temp->right = binaryTree(preorder);

    return temp;
}


// METHOD 1 (using recursion, dfs)
/*
void findPosition(Node* root, int pos, int& left){
    if(!root) return;

    if(pos > left) left = pos;

    findPosition(root->left, pos+1, left);
    findPosition(root->right, pos, left);
}

void helper(Node* root, int idx, vector<vector<int>>& ans){
    if(!root) return;

    ans[idx].push_back(root->data);

    helper(root->left, idx+1, ans);
    helper(root->right, idx, ans);
}

vector<int> diagonalTraversal(Node* root){

    int left = 0;
    findPosition(root, 0, left);

    vector<vector<int>> ans(left+1);

    helper(root, 0, ans);

    vector<int> res;
    for(auto& i : ans){
        for(int val : i){
            res.push_back(val);
        }
    }
    return res;
}
*/


// METHOD 2 (using queue, customised level order traversal)
vector<int> diagonalTraversal(Node* root){
    if(!root) return {};

    vector<int> ans;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        while(temp){
            ans.push_back(temp->data);

            if(temp->left) q.push(temp->left);

            temp = temp->right;
        }
    }
    return ans;
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};;

    Node* root = binaryTree(preorder);

    vector<int> res = diagonalTraversal(root);
    cout<<"Diagonal traversal: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}