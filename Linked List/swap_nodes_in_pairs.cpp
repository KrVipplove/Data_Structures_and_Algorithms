#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* createLinkedList(vector<int>& nums, int idx, int n){
    if(idx == n) return nullptr;

    Node* newNode = new Node(nums[idx]);
    newNode->next = createLinkedList(nums, idx+1, n);

    return newNode;
}

Node* swapInPairs(Node* head){
    if(!head || !head->next) return head;

    Node* temp = head;
    Node* prev = nullptr;

    while(temp && temp->next){
        Node* nextNode = temp->next;
        Node* newNext = nextNode->next;

        nextNode->next = temp;
        temp->next = newNext;

        if(prev){
            prev->next = nextNode;

        }else{
            head = nextNode;
        }

        prev = temp;
        temp = newNext;
    }
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

    Node* head = createLinkedList(nums, 0, n);
    cout<<"Linked List: ";
    printLinkedList(head);

    head = swapInPairs(head);
    cout<<"Swapped Linked List: ";
    printLinkedList(head);

    return 0;
}