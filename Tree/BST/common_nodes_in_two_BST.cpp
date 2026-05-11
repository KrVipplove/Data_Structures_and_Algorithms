#include <iostream>
#include <vector>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};


Node* createBSTpreorder(vector<int>& preorder, int& idx, int minVal, int maxVal){
    if(idx >= preorder.size() || preorder[idx] <= minVal || preorder[idx] >= maxVal){
        return nullptr;
    }

    Node* root = new Node(preorder[idx++]);

    root->left = createBSTpreorder(preorder, idx, minVal, root->data);
    root->right = createBSTpreorder(preorder, idx, root->data, maxVal);

    return root;
}


vector<int> findCommon(Node *r1, Node *r2){
    // Your code here
    vector<int> ans;
    
    stack<Node*> s1;
    stack<Node*> s2;
    
    Node* temp1 = r1;
    Node* temp2 = r2;
    
    while(temp1){
        s1.push(temp1);
        temp1 = temp1->left;
    }
    
    while(temp2){
        s2.push(temp2);
        temp2 = temp2->left;
    }
    
    while(!s1.empty() && !s2.empty()){
        int p = s1.top()->data;
        int q = s2.top()->data;
        
        if(p > q){
            temp2 = s2.top()->right;
            s2.pop();
        }else if(p < q){
            temp1 = s1.top()->right;
            s1.pop();
        }else{
            ans.push_back(p);
            
            temp1 = s1.top()->right;
            temp2 = s2.top()->right;
            
            s1.pop();
            s2.pop();
        }
        
        while(temp1){
            s1.push(temp1);
            temp1 = temp1->left;
        }
        
        while(temp2){
            s2.push(temp2);
            temp2 = temp2->left;
        }
    }
    return ans;
}


int main(){
    vector<int> preorder1 = {0, 1, 4, 5, 10, 7, 9};
    vector<int> preorder2 = {10, 7, 4, 9, 20};

    int idx1 = 0, idx2 = 0;
    Node* root1 = createBSTpreorder(preorder1, idx1, INT_MIN, INT_MAX);
    Node* root2 = createBSTpreorder(preorder2, idx2, INT_MIN, INT_MAX);

    vector<int> ans = findCommon(root1, root2);
    cout<<"Common node/s in two BSTs is/are: ";
    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}