// traverse the tree in level order in spiral form
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
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

vector<int> findSpiral(Node* root){
    vector<int> ans;
    if(!root) return ans;

    queue<Node*> q;
    q.push(root);

    int level = -1;

    while(!q.empty()){
        level++;
        vector<int> tempV;

        int size = q.size();
        for(int i=0; i<size; i++){
            Node* temp = q.front();
            q.pop();

            tempV.push_back(temp->data);

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        if(level % 2 == 0){
            reverse(tempV.begin(), tempV.end());
        }
        for(int val : tempV) ans.push_back(val);
    }
    return ans;
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};

    Node* root = binaryTree(preorder);

    vector<int> res = findSpiral(root);
    cout<<"Spiral traversal: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}