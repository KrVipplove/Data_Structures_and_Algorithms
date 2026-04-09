#include <iostream>
#include <vector>
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

Node* createBSTfromSortedArray(vector<int>& nums, int start, int end){
    if(start > end) return nullptr;

    int mid = start + (end-start)/2;

    Node* root = new Node(nums[mid]);
    root->left = createBSTfromSortedArray(nums, start, mid-1);
    root->right = createBSTfromSortedArray(nums, mid+1, end);

    return root;
}

// printing preorder 
void printPreorder(Node* root){
    if(!root) return;

    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array in sorted order: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    Node* root = createBSTfromSortedArray(nums, 0, n-1);

    cout<<"Preorder traversal of created BST: ";
    printPreorder(root);
    cout<<endl;

    return 0;
}