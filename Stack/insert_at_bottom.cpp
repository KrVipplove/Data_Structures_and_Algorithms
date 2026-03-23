#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& s, int x){
    stack<int> temp;

    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }

    s.push(x);

    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}

void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the stack: ";
    cin>>n;

    stack<int> s;
    cout<<"Enter the elements of the stack (bottom to top): ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.push(x);
    }

    int x;
    cout<<"Enter the element to be inserted: ";
    cin>>x;

    cout<<"Original Stack (top to bottom): ";
    printStack(s);

    insertAtBottom(s,x);

    cout<<"New Stack (top to bottom): ";
    printStack(s);

    return 0;
}