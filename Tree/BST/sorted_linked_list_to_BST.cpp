#include <iostream>
#include <vector>
using namespace std;


struct LNode { //Linked List data structure
    int data;
    struct LNode* next;
    LNode(int x){
        data = x;
        next = NULL; }
};
struct TNode {   //Tree data structure
    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x){
        data=x;
        left=right=NULL; }
};


// METHOD 1(using inorder array)
TNode *helper(vector<int> &nums, int start, int end)
{
    if (start > end)
        return nullptr;

    int mid = start + (end - start + 1) / 2;

    TNode *root = new TNode(nums[mid]);
    root->left = helper(nums, start, mid - 1);
    root->right = helper(nums, mid + 1, end);

    return root;
}

TNode *sortedListToBST(LNode *head)
{
    // code here
    vector<int> nums;

    LNode *temp = head;
    while (temp)
    {
        nums.push_back(temp->data);
        temp = temp->next;
    }

    int start = 0;
    int end = nums.size() - 1;
    return helper(nums, start, end);
}

int main(){

}