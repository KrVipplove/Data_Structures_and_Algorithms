#include <iostream>
using namespace std;


struct Node{
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


Node* sortZerosOnesTwos(Node* head){
    if(!head->next) return head;


    // METHOD 1

    Node* head0 = new Node(0);
    Node* head1 = new Node(0);
    Node* head2 = new Node(0);

    Node* temp = head;
    Node* temp0 = head0;
    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp){
        if(temp->data == 0){
            temp0->next = temp;
            temp0 = temp0->next;
        }else if(temp->data ==1){
            temp1->next = temp;
            temp1 = temp1->next;
        }else{
            temp2->next = temp;
            temp2 =  temp2->next;
        }
        temp = temp->next;
    }

    temp0->next = head1->next ? head1->next : head2->next;
    temp1->next = head2->next;
    temp2->next = NULL;

    head = head0->next ? head0->next : (head1->next ? head1->next : head2->next);

    delete head0;
    delete head1;
    delete head2;

    return head;


    /*
    
    // DATA MANIPULATION METHOD   (METHOD 2)

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    Node* temp = head;

    while(temp){
        if(temp->data == 0){
            count0++;
        }else if(temp->data == 1){
            count1++;
        }else{
            count2++;
        }
        temp = temp->next;
    }

    temp = head;

    while(count0--){
        temp->data = 0;
        temp = temp->next;
    }
    while(count1--){
        temp->data = 1;
        temp = temp->next;
    }
    while(count2--){
        temp->data = 2;
        temp = temp->next;
    }

    return head;
    */
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
    cout<<"Input Linked List: ";
    printLinkedList(head);

    head = sortZerosOnesTwos(head);
    cout<<"Sorted Linked List: ";
    printLinkedList(head);

    return 0;
}