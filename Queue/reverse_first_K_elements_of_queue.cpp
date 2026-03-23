#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

void reverseFirstKElements(queue<int>& q, int k){
    if(k <= 0 || k > q.size()) return;
    
    stack<int> s;
    int n = q.size()-k;

    while(k--){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    while(n--){
        q.push(q.front());
        q.pop();
    }
}

void printQueue(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the initial size of the queue: ";
    cin>>n;

    queue<int> q;
    cout<<"Enter the elements in the queue: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }

    int k;
    cout<<"Enter the no. of elements you want to reverse: ";
    cin>>k;

    reverseFirstKElements(q,k);

    printQueue(q);
}