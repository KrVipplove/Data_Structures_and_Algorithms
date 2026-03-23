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
    if(idx==n){
        return NULL;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->next = createLinkedList(nums, idx+1, n);

    return newNode;
}

Node* middleOfLinkedList(Node* head){
    int count = 0;
    Node* temp = head;

    while(temp){
        count++;
        temp = temp->next;
    }

    count /= 2;
    temp = head;

    while(count--){
        temp = temp->next;
    }

    return temp;
}

Node* middleOfLinkedListSlowAndFast(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
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

    Node* middle = middleOfLinkedList(head);
    Node* middleM2 = middleOfLinkedListSlowAndFast(head);

    cout<<"Middle of lined list is: "<<middle->data<<" at address "<<middle<<endl;
    cout<<"Middle of lined list is (using slow and fast approach): "<<middle->data<<" at address "<<middle<<endl;

    return 0;
}