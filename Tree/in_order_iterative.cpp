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

// METHOD 1 (using stack);
/*
vector<int> inOrder(Node* root){
    vector<int> ans;
    if(!root) return ans;

    stack<pair<Node*, bool>> s;
    s.push({root, false});

    while(!s.empty()){
        Node* temp = s.top().first;
        bool flag = s.top().second;
        s.pop();

        if(flag == false){
            if(temp->right) s.push({temp->right, false});
            s.push({temp,true});
            if(temp->left) s.push({temp->left, false});
        }else{
            ans.push_back(temp->data);
        }
    }
    return ans;
}
*/


// METHOD 2 (MORRIS TRAVERSAL)
vector<int> inOrder(Node* root){
    vector<int> ans;
    if(!root) return ans;

    while(root){
        if(!root->left){
            ans.push_back(root->data);
            root = root->right;
        }else{
            Node* temp = root->left;
            while(temp->right && temp->right != root){
                temp = temp->right;
            }
            if(temp->right == nullptr){
                temp->right = root;
                root = root->left;
            }else{
                ans.push_back(root->data);
                temp->right = nullptr;
                root = root->right;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, 7, -1, -1, 8, -1, -1};;

    Node* root = binaryTree(preorder);

    vector<int> res = inOrder(root);
    cout<<"In order traversal (iteratively): ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}