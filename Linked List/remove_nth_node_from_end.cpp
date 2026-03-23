#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* createLinkedList(vector<int>& nums, int idx, int n){
    if(idx == n){
        return NULL;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->next = createLinkedList(nums, idx+1, n);

    return newNode;
}

Node* deleteKthNodeFromEnd(Node* head, int k){
    int count = 0;
    Node* temp = head;
    
    while(temp){
        temp = temp->next;
        count++;
    }

    if (k > count) return head;

    if (k == count) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return head;
    }

    temp = head;
    count -= k-1;

    while(count--){
        temp = temp->next;
    }

    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;

    return head;
}

void printLinkedList(Node* head){
    while(head){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the linked list: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the linked list: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int k;
    cout<<"Enter the position of element from last you want to delete: ";
    cin>>k;

    Node* head = createLinkedList(nums, 0, n);

    cout<<"Your Linked list:";
    printLinkedList(head);

    head = deleteKthNodeFromEnd(head, k);

    cout<<"Linked List after deletion:";
    printLinkedList(head);

    return 0;
}