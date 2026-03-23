#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = NULL;
    }
};

Node* createLinkedList(vector<int>& nums, int idx, int n){
    if(idx==n){
        return NULL;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->next = createLinkedList(nums, idx+1, n);

    return newNode;
};

void printList(Node* head){
    while(head){
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

Node* reverseLinkedList(Node* head, Node* pre){
    if(head == NULL){
        return pre;
    }

    Node* nextNode = head->next;
    head->next = pre;

    return reverseLinkedList(nextNode, head);

}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    Node* head = createLinkedList(nums, 0, n);

    cout<<"Linked list: ";
    printList(head);

    
    head = reverseLinkedList(head, NULL);
    cout<<"Reversed Linked List: ";
    // printList(temp);
    printList(head);


    return 0;

}