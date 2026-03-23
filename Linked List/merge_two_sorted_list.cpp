#include <iostream>
using namespace std;


struct Node{
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};


Node* mergeTwoLists(Node* head1, Node* head2) {
    if(head1 == NULL){
        return head2;
    }else if(head2 == NULL){
        return head1;
    }
    if(head1->val <= head2->val){
        head1->next = mergeTwoLists(head1->next, head2);
        return head1;
    }else{
        head2->next = mergeTwoLists(head1, head2->next);
        return head2;
    }
}


Node* createLinkedList(vector<int>& nums, int idx, int n){
    if(idx == n){
        return NULL;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->next = createLinkedList(nums, idx+1, n);

    return newNode;
}


void printLinkedList(Node* temp){
    while(temp){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    int a;
    cout<<"Enter the size of the list_1: ";
    cin>>a;

    vector<int> nums1(a);
    cout<<"Enter the elements of the list_1: ";
    for(int i=0; i<a; i++){
        cin>>nums1[i];
    }

    int b;
    cout<<"Enter the size of the list_2: ";
    cin>>b;

    vector<int> nums2(b);
    cout<<"Enter the elements of the list_2: ";
    for(int i=0; i<b; i++){
        cin>>nums2[i];
    }

    Node* head1 = createLinkedList(nums1, 0, a);
    cout<<"List_1: ";
    printLinkedList(head1);
    Node* head2 = createLinkedList(nums2, 0, b);
    cout<<"List_2: ";
    printLinkedList(head2);

    Node* headMerged = mergeTwoLists(head1, head2);
    cout<<"Merged_List: ";
    printLinkedList(headMerged);

    return 0;
}