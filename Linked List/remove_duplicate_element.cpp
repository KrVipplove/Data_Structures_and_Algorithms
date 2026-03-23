#include <iostream>
using namespace std;

class Node{

public:
    int data;
    Node* pre = NULL;
    Node* next = NULL;

    Node(int val){
        data = val;
    }
};

Node* createDoublyLinkedList(vector<int>& nums, int idx, int n, Node* preNode){
    if(idx == n){
        return NULL;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->pre = preNode;
    newNode->next = createDoublyLinkedList(nums, idx+1, n, newNode);

    return newNode;
}

void removeDuplicateElements(Node* head){
    if(!head || !head->next){
        return;
    }

    Node* lastNode = head;
    Node* temp = head->next;

    while(temp){
        if(temp->data == lastNode->data){
            /*
            Node* toDelete = temp;
            if(temp->next){
                temp = temp->next;

                lastNode->next = temp;
                temp->pre = lastNode;
                toDelete->pre = toDelete->next = NULL;

                delete toDelete;
            }else{
                lastNode->next = NULL;
                toDelete->pre = NULL;
                delete toDelete;
                temp = NULL;
            }
            */


            lastNode->next = temp->next;
            if(temp->next){
                temp->next->pre = lastNode;
            }
            
            delete temp;
            temp = lastNode->next;
        }else{
            lastNode = temp;
            temp = temp->next;
        }
    }
}

void printLinkedList(Node* temp){
    cout<<"NULL <=>";
    while(temp){
        cout<<temp->data<<" <=> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the doubly linked list: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the doubly linked list: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());

    Node* head = createDoublyLinkedList(nums, 0, n, NULL);

    removeDuplicateElements(head);
    printLinkedList(head);
    
    return 0;
}