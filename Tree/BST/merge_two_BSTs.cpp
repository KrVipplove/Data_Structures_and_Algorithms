#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



// METHOD 1 (TC -> O(n), SC->O(n+m))
/*
void inorder(Node* root, vector<int>& arr){
    if(!root) return;
    
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

vector<int> merge(Node *root1, Node *root2) {
    // code here
    vector<int> nums1;
    vector<int> nums2;
    vector<int> ans;
    
    inorder(root1, nums1);
    inorder(root2, nums2);
    
    int i = 0, j = 0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] <= nums2[j]){
            ans.push_back(nums1[i++]);
        }else{
            ans.push_back(nums2[j++]);
        }
    }
    while(i < nums1.size()) ans.push_back(nums1[i++]);
    while(j < nums2.size()) ans.push_back(nums2[j++]);
    
    return ans;
}
*/


// METHOD 1 (using stack)
vector<int> merge(Node* root1, Node* root2){
    vector<int> ans;
    
    stack<Node*> s1;
    stack<Node*> s2;
    
    Node* temp1 = root1;
    Node* temp2 = root2;
    
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
        
        if(p <= q){
            ans.push_back(p);
            temp1 = s1.top()->right;
            s1.pop();
        }else{
            ans.push_back(q);
            temp2 = s2.top()->right;
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
    
    while(!s1.empty()){
        ans.push_back(s1.top()->data);
        Node* temp = s1.top()->right;
        s1.pop();
        
        while(temp){
            s1.push(temp);
            temp = temp->left;
        }
    }
    
    while(!s2.empty()){
        ans.push_back(s2.top()->data);
        Node* temp = s2.top()->right;
        s2.pop();
        
        while(temp){
            s2.push(temp);
            temp = temp->left;
        }
    }
    
    return ans;
}

int main(){
    
}