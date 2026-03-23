//  return the largest value in each level
#include <iostream>
#include <vector>
#include <queue>
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

vector<int> largestValues(Node* root){
    vector<int> ans;
    if(!root) return ans;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int maxVal = INT_MIN;
        int size = q.size();
        for(int i=0; i<size; i++){
            Node* temp = q.front();
            q.pop();

            maxVal = max(maxVal, temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        ans.push_back(maxVal);
    }
    return ans;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = binaryTree(preorder);

    vector<int> res = largestValues(root);
    cout<<"Largest value in each level: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}