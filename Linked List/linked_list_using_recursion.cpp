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

Node* createLinkedListReverse(vector<int>& nums, int idx, int n, Node* prev){

    if(idx == n){
        return prev;
    }

    Node* newNode = new Node(nums[idx]);
    newNode->next = prev;

    return createLinkedListReverse(nums, idx+1, n, newNode);
}

Node* deleteNodeUsingRecursion(Node* head, int x){
    if(x == 1){
        Node* temp = head->next;
        delete head;
        return temp;
    }

    head->next = deleteNodeUsingRecursion(head->next, x-1);
    return head;
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

    Node* headRev = createLinkedListReverse(nums, 0, n, NULL);

    Node* temp = head;
    cout<<"Linked-List: ";
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

    Node* tempRev = headRev;
    cout<<"Reversed Linked-List: ";
    while(tempRev != NULL){
        cout<<tempRev->data<<"->";
        tempRev = tempRev->next;
    }
    cout<<"NULL"<<endl;

    return 0;

}