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

Node* merge(Node* head1, Node* head2){
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;
    
    if(head1->data <= head2->data){
        head1->next = merge(head1->next, head2);
        return head1;
    }else{
        head2->next = merge(head1, head2->next);
        return head2;
    }
}


// METHOD 1


/*
Node* mergeKLists(vector<Node*>& arr) {
    int n = arr.size();
    
    if(n == 1){
        return arr[0];
    }
    
    int i = 1;
    
    while(i<n){
        arr[0] = merge(arr[0],arr[i]);
        i++;
    }
    return arr[0];
}
*/



// METHOD 2

void helper(vector<Node*>& arr, int start, int end){
    if(start>=end){
        return;
    }
    
    int mid = start+(end-start)/2;
    
    helper(arr, start, mid);
    helper(arr, mid+1, end);
    
    arr[start] = merge(arr[start], arr[mid+1]);
}

Node* mergeKLists(vector<Node*>& arr){
    int start = 0;
    int end = arr.size()-1;
    
    helper(arr, start, end);
    
    return arr[0];
}

int main(){

    return 0;
}