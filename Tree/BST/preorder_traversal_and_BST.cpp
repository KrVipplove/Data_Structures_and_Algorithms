// Q. Check if preorder can represent a BST

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


void canRepresentBST(vector<int>& preorder, int& idx, int minVal, int maxVal, int n){
    if(idx >= preorder.size() || preorder[idx] <= minVal || preorder[idx] >= maxVal){
        return;
    }

    int data = preorder[idx++];

    canRepresentBST(preorder, idx, minVal, data, n);
    canRepresentBST(preorder, idx, data, maxVal, n);
}

int main(){
    vector<int> preorder = {8, 3, 1, 6, 4, 7, 10, 14, 13, 1};
    int n = preorder.size();

    int idx = 0;
    canRepresentBST(preorder, idx, INT_MIN, INT_MAX, n);

    if(idx == n){
        cout<<"Input preorder can represent a valid BST"<<endl;
    }else{
        cout<<"Input preorder can not represent a BST"<<endl;
    }

    return 0;
}