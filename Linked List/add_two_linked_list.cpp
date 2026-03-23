#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
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

Node* reverseLinkedList(Node* head, Node* prev){
    if(head == NULL){
        return prev;
    }

    Node* nextNode = head->next;
    head->next = prev;

    return reverseLinkedList(nextNode, head);
}

Node* addTwoLists(Node* head1, Node* head2){

    head1 = reverseLinkedList(head1, NULL);
    head2 = reverseLinkedList(head2, NULL);

    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* head = NULL;
    Node* tail = NULL;

    int sum = 0;
    int carry = 0;

    while(temp1 && temp2){
        sum = temp1->data + temp2->data + carry;

        Node* newNode = new Node(sum%10);
        if(!head){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = tail->next;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
        carry = sum/10;
    }

    while(temp1){
        sum = temp1->data + carry;
        if(!head){
            head = tail = new Node(sum%10);
        }else{
            tail->next = new Node(sum%10);
            tail = tail->next;
        }
        temp1 = temp1->next;
        carry = sum/10;
    }

    while(temp2){
        sum = temp2->data + carry;
        if(!head){
            head = tail = new Node(sum%10);
        }else{
            tail->next = new Node(sum%10);
            tail = tail->next;
        }
        temp2 = temp2->next;
        carry = sum/10;
    }

    while(carry){
        tail->next = new Node(carry%10);
        tail = tail->next;

        carry /= 10;
    }

    head = reverseLinkedList(head,NULL);

    while(head && head->next && head->data == 0){
        Node* temp = head;
        head = head->next;
        delete temp;
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
    int a;
    cout<<"Enter the size of the first linked list: ";
    cin>>a;

    vector<int> nums1(a);
    cout<<"Enter the elements of the first linked list: ";
    for(int i=0; i<a; i++){
        cin>>nums1[i];
    }

    int b;
    cout<<"Enter the size of the second linked list: ";
    cin>>b;

    vector<int> nums2(b);
    cout<<"Enter the elements of the second linked list: ";
    for(int i=0; i<b; i++){
        cin>>nums2[i];
    }

    Node* head1 = createLinkedList(nums1, 0, a);
    Node* head2 = createLinkedList(nums2, 0, b);

    cout<<"First linked list: ";
    printLinkedList(head1);

    cout<<"Second linked list: ";
    printLinkedList(head2);

    Node* head = addTwoLists(head1, head2);
    cout<<"Addition of two lists: ";
    printLinkedList(head);

    return 0;
}