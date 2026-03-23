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


Node* binaryTree(vector<int>& preorder, int& index){
    index++;

    if(index >= preorder.size() || preorder[index] == -1){
        return nullptr;
    }

    Node* temp = new Node(preorder[index]);
    temp->left = binaryTree(preorder, index);
    temp->right = binaryTree(preorder, index);

    return temp;
}

void findPosition(Node* root, int pos, int& left, int& right){
    if(!root) return;

    if(pos < left) left = pos;
    if(pos > right) right = pos;

    findPosition(root->left, pos-1, left, right);
    findPosition(root->right, pos+1, left, right);
}

vector<vector<int>> verticalTraversal(Node* root){
    int left = 0;
    int right = 0;
    findPosition(root, 0, left, right);

    vector<vector<int>> ans(right - left + 1);
    if(!root) return ans;

    queue<pair<Node*, int>> q;
    q.push({root, -left});

    while(!q.empty()){
        Node* temp = q.front().first;
        int idx = q.front().second;
        q.pop();

        ans[idx].push_back(temp->data);

        if(temp->left) q.push({temp->left, idx-1});
        if(temp->right) q.push({temp->right, idx+1});
    }
    return ans;
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, -1};

    int index = -1;
    Node* root = binaryTree(preorder, index);

    vector<vector<int>> res = verticalTraversal(root);
    cout<<"Vertical order traversal (idx wise)"<<endl;
    for(auto& i : res){
        for(int val : i){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}