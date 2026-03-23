#include <iostream>
#include <vector>
#include <stack>
#include <utility>
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

vector<vector<int>> helper(Node* root){
    vector<int> pre, in, post;
    if(!root) return {{}, {}, {}};

    stack<pair<Node*, int>> s;
    s.push({root, 1});

    while(!s.empty()){
        Node* temp = s.top().first;
        int state = s.top().second;
        s.pop();

        if(state == 1){
            pre.push_back(temp->data);
            s.push({temp, 2});

            if(temp->left) s.push({temp->left, 1});

        }else if(state == 2){
            in.push_back(temp->data);
            s.push({temp, 3});

            if(temp->right) s.push({temp->right, 1});

        }else{
            post.push_back(temp->data);
        }
    }
    return {pre, in, post};
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};;

    Node* root = binaryTree(preorder);

    vector<vector<int>> res = helper(root);
    cout<<"Pre Order, In Order and Post Order traversals are: ";
    for(auto i : res){
        for(int val : i){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}