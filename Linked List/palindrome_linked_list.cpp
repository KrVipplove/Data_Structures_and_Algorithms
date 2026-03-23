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

Node* createLinkedList(vector<int>& nums, int idx, int n){
    if(idx==n){
        return NULL;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->next = createLinkedList(nums, idx+1, n);

    return newNode;
}

bool compare(Node* head, Node* head1){
    while(head && head1){
        if(head->val != head1->val){
            return false;
        }
        head = head->next;
        head1 = head1->next;
    }
    return true;
}

Node* reverse(Node* head){
    Node* pre = NULL;
    Node* nextNode = NULL;

    while(head){
        nextNode = head->next;
        head->next = pre;
        pre = head;
        head = nextNode;
    }

    return pre;
}

Node* middle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

bool isPalindrome(Node* head) {

    Node* mid = middle(head);
    Node* head1 = reverse(mid);

    bool res = compare(head, head1);

    reverse(head1);

    return res;
}

void printLinkedList(Node* head){
    while(head){
        cout<<head->val<<"->";
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

    if(n==1){
        cout<<"Linked List is a valid palindrome."<<endl;
        return 0;
    }

    Node* head = createLinkedList(nums, 0, n);
    printLinkedList(head);

    if(isPalindrome(head)){
        cout<<"Linked list is a valid palindrome."<<endl;
    }else{
        cout<<"Linked list is not a palindrome."<<endl;
    }

    printLinkedList(head);

    return 0;
}