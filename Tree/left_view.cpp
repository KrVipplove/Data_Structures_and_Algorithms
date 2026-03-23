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


// METHOD 1 (using level order traversal : pushing first element at every level)
/*
vector<int> leftView(Node* root){
    vector<int> ans;
    if(!root) return ans;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        ans.push_back(q.front()->data);
        int size = q.size();

        for(int i=0; i<size; i++){
            Node* temp = q.front();
            q.pop();

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return ans;
}
*/


// MEHTOD 2 (using pre-order recursion, // logic : pushing element of vec.size() == level, means visiting level first time;)
void leftView(Node* root, int level, vector<int>& res){
    if(!root) return;

    if(res.size() == level){
        res.push_back(root->data);
    }

    leftView(root->left, level+1, res);
    leftView(root->right, level+1, res);
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};;

    Node* root = binaryTree(preorder);

    // vector<int> res = leftView(root);           // for method 1

    vector<int> res;                               // for method 2
    leftView(root, 0, res);                        // for method 2
    
    cout<<"Left View of binary tree: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}