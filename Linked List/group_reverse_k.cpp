#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* createLinkedList(vector<int> nums, int idx, int n){
    if(idx == n){
        return NULL;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->next = createLinkedList(nums, idx+1, n);

    return newNode;
}

Node* reverseKgroup(Node* head, int k){
    // METH0D 1;
    /*
    if(!head || !head->next) return head;

    Node* first = new Node(0);
    first->next = head;
    head = first;

    int x;
    Node* second;
    Node* temp;
    Node* prev;
    Node* nextNode;

    while(first->next){
        x = k;

        second = first->next;
        temp = first->next;
        prev = first;

        while(temp && x--){
            nextNode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextNode;
        }

        first->next = prev;
        second->next = temp;
        first = second;
    }

    first = head;
    head = head->next;
    delete first;
    
    return head;
    */


    // METHOD 2

    Node* temp = head;
    for(int i=0; i<k; i++){
        if(!temp){
            return head;
        }
        temp = temp->next;
    }

    Node* next = reverseKgroup(temp, k);

    temp = head;
    
    for(int i=0; i<k; i++){
        Node* nextNode = temp->next;
        temp->next = next;
        next = temp;
        temp = nextNode;
    }

    return  next;
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
    cout<<"Enter the no. of groups you want to reverse: ";
    cin>>k;

    Node* head = createLinkedList(nums, 0, n);

    cout<<"Input linked list: ";
    printLinkedList(head);

    head = reverseKgroup(head, k);

    cout<<"K-Group reversed linked list: ";
    printLinkedList(head);

    return 0;
}