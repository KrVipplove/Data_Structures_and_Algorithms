#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> reverseQueue(queue<int> q){
    stack<int> s;
    queue<int> newQ;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        newQ.push(s.top());
        s.pop();
    }

    return newQ;
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
    cout<<"Enter the size of the array: ";
    cin>>n;

    queue<int> q;
    cout<<"Enter the elements of the queue: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        q.push(element);
    }

    queue<int> res = reverseQueue(q);

    printQueue(res);

    return 0;
}