// Q. Return the size of largest BST
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};

struct Box{
    bool BST;
    int size;
    int maxVal;
    int minVal;

    Box(){
        BST = 1;
        size = 0;
        maxVal = INT_MIN;
        minVal = INT_MAX;
    }
};

Node* binaryTree(){
    int x;
    cin>>x;

    if(x==-1){
        return nullptr;
    }

    Node* temp = new Node(x);

    cout<<"Enter the left chid of "<<x<<": ";
    temp->left = binaryTree();

    cout<<"Enter the right child of "<<x<<": ";
    temp->right = binaryTree();

    return temp;
}


Box* helper(Node* root, int& maxSize){
    if(!root) return new Box();

    Box* leftBox = helper(root->left, maxSize);
    Box* rightBox = helper(root->right, maxSize);

    if(leftBox->BST && rightBox->BST && root->data > leftBox->maxVal && root->data < rightBox->minVal){
        Box* curr = new Box();
        curr->size = 1 + leftBox->size + rightBox->size;
        curr->minVal = min(root->data, leftBox->minVal);
        curr->maxVal = max(root->data, rightBox->maxVal);

        maxSize = max(maxSize, curr->size);
        return curr;
    }

    Box* curr = new Box();
    curr->BST = 0;
    // curr->size = 1 + leftBox->size + rightBox->size;     // no need to update size;
    return curr;
}


int largestBST(Node* root){
    if(!root) return 0;

    int maxSize = 0;
    helper(root, maxSize);

    return maxSize;
}

int main(){
    cout<<"Enter the root node: ";
    Node* root = binaryTree();

    cout<<"Size of largest BST in the input tree is: "<<largestBST(root)<<endl;
    
    return 0;
}