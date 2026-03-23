#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* pre;

    Node(int val){
        data = val;
        next = NULL;
        pre = NULL;
    }
};

Node* doublyLinkedList(vector<int>& nums, int idx, int n, Node* pre){
    if(idx == n){
        return NULL;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->pre = pre;
    newNode->next = doublyLinkedList(nums, idx+1, n, newNode);

    return newNode;
}

Node* reversedDoublyLinkedList(vector<int>& nums, int idx, int n, Node* preNode){
    if(idx == n){
        return preNode;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->next = preNode;
    if(preNode) preNode->pre = newNode;


    return reversedDoublyLinkedList(nums, idx+1, n, newNode);
}

void printList(Node* head){
    cout<<"NULL <=> ";
    while(head){
        cout<<head->data<<" <=> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the doubly linked list: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the doubly linked list: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    Node* head = doublyLinkedList(nums, 0, n, NULL);
    Node* headRev = reversedDoublyLinkedList(nums, 0, n, NULL);
    printList(head);
    printList(headRev);

    return 0;
}