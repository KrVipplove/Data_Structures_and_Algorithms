// Q. Given the root of a Binary search tree(BST), where exactly two nodes were swapped by mistake. Your task is to fix (or correct) the BST by swapping them back. Do not change the structure of the tree.

// NOTE: construction of tree is proceeding with max and min val so wrong tree creation may happen with wrong input;

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


Node* createBSTpreorder(vector<int>& preorder, int& idx, int minVal, int maxVal){
    if(idx >= preorder.size() || preorder[idx] <= minVal || preorder[idx] >= maxVal){
        return nullptr;
    }

    Node* root = new Node(preorder[idx++]);

    root->left = createBSTpreorder(preorder, idx, minVal, root->data);
    root->right = createBSTpreorder(preorder, idx, root->data, maxVal);

    return root;
}

// METHOD 1
/*
void inorder(Node* root, vector<int>& arr){
    if(!root) return;
    
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

void update(Node* root, vector<int>& arr, int& idx){
    if(!root) return;
    
    update(root->left, arr, idx);
    root->data = arr[idx++];
    update(root->right, arr, idx);
}

void correctBST(Node* root) {
    // add code here.
    if(!root) return;
    
    vector<int> arr;
    inorder(root, arr);
    
    int first = -1;
    int second = -1;
    
    for(int i=1; i<arr.size(); i++){
        if(arr[i] < arr[i-1]){
            if(first == -1){
                first = i-1;
                second = i;
            }else{
                second = i;
            }
        }
    }
    
    swap(arr[first], arr[second]);
    
    int idx = 0;
    update(root, arr, idx);
}
*/


// METHOD 2
void correctBST(Node* root){
    if(!root) return;
    
    Node* first = nullptr;
    Node* second = nullptr;
    
    Node* prev = nullptr;
    Node* curr = root;
    
    while(curr){
        if(!curr->left){
            if(prev){
                if(prev->data > curr->data){
                    if(!first){
                        first = prev;
                        second = curr;
                    }else{
                        second = curr;
                    }
                }
            }
            prev = curr;
            curr = curr->right;
        }else{
            Node* temp = curr->left;
            
            while(temp->right != nullptr && temp->right != curr) temp = temp->right;
            
            if(temp->right == nullptr){
                temp->right = curr;
                curr = curr->left;
            }else{
                if(prev){
                    if(prev->data > curr->data){
                        if(!first){
                            first = prev;
                            second = curr;
                        }else{
                            second = curr;
                        }
                    }
                }
                temp->right = nullptr;
                prev = curr;
                curr = curr->right;
            }
        }
    }
    
    if(first && second){
        int temp = first->data;
        first->data = second->data;
        second->data = temp;
    }
}


// printing inorder 
void printInorder(Node* root){
    if(!root) return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
    vector<int> preorder = {8, 13, 1, 6, 4, 7, 10, 14, 3};

    int idx = 0;
    Node* root = createBSTpreorder(preorder, idx, INT_MIN, INT_MAX);

    cout<<"Inorder traversal of tree (before fixing): ";
    printInorder(root);
    cout<<endl;

    correctBST(root);

    cout<<"Inorder traversal of tree (after fixing): ";
    printInorder(root);
    cout<<endl;

    return 0;
}


// Q. merge two BST
// Q. sorted linked list to BST