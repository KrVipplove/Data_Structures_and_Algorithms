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

/*
Node* createLinkedList(vector<int>& nums, int idx, int n){
    if(idx==n){
        return NULL;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->next = createLinkedList(nums, idx+1, n);

    return newNode;
}
*/

bool hasCycle(Node* head){
    if(head == NULL || head->next == NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }

    return (fast && fast->next);
}

/*
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


}
*/