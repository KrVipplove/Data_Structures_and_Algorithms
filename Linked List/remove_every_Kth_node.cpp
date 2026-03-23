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
    if(idx==n){
        return NULL;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->next = createLinkedList(nums, idx+1, n);

    return newNode;
}

Node* removeEveryKthNode(Node* head, int k){
    if (!head || k <= 1) return NULL;

    int count = 1;
    Node* temp = head;
    
    while(temp && temp->next){
        if((count+1)%k == 0){
            Node* toDelete = temp->next;
            temp->next = toDelete->next;
            delete toDelete;
        }else{
            temp = temp->next;
        }
        count++;
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

    int k;
    cout<<"Enter the position of node to be removed multiple times: ";
    cin>>k;

    Node* head = createLinkedList(nums, 0, n);

    head = removeEveryKthNode(head, k);
    printLinkedList(head);
}