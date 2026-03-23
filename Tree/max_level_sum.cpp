// return the level whose sum of all ndoes is maximal
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

int maxLevelSum(Node* root){
    int currLevel = 1;
    int ansLevel = 1;
    int maxSum = INT_MIN;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        int sum = 0;
        for(int i=0; i<size; i++){
            Node* temp = q.front();
            q.pop();

            sum += temp->data;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        if(sum > maxSum){
            maxSum = sum;
            ansLevel = currLevel;
        }
        currLevel++;
    }
    return ansLevel;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = binaryTree(preorder);

    int ansLevel = maxLevelSum(root);
    cout<<"Sum of all nodes of level "<<ansLevel<<" is maximal."<<endl;

    return 0;
}