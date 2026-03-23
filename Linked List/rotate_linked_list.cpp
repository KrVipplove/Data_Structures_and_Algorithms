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

Node* rotateRight(Node* head, int k) {
    if(!head || !head->next || k==0){
        return head;
    }

    Node* temp = head;
    int count = 1;

    while(temp->next){
        count++;
        temp = temp->next;
    }

    temp->next = head;

    k = k % count;

    int newHeadSteps = count - k;

    Node* newTail = head;
    for(int i=1; i<newHeadSteps; i++){
        newTail = newTail->next;
    }

    Node* newHead = newTail->next;
    newTail->next = NULL;

    return newHead;
}

void printList(Node* head){
    while(head){
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
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

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    
    head = rotateRight(head, k);
    // printList(temp);
    cout<<"New List: ";
    printList(head);

    return 0;
}