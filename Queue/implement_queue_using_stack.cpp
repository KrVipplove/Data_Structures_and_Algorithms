#include <iostream>
#include <stack>
using namespace std;

// METHOD 1 (brute force)   (Overall TC if poping all elements = O(n^2))
/*
class MyQueue {
public:

    stack<int> s;
    stack<int> s2;

    MyQueue() {
        
    }
    
    void push(int x) {
        cout<<x<<" pushed"<<endl;
        s.push(x);
    }
    
    int pop() {
        if(s.empty()) return -1;
        while(s.size() > 1){
            s2.push(s.top());
            s.pop();
        }
        int element = s.top();
        cout<<element<<" poped"<<endl;
        s.pop();
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return element;
    }
    
    int peek() {
        if(s.empty()) return -1;
        while(s.size() > 1){
            s2.push(s.top());
            s.pop();
        }
        int element = s.top();
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return element;
    }
    
    bool empty() {
        return s.empty();
    }
};
*/


// METHOD 2 (optimal) (Overall TC if poping all elements = O(n))
class MyQueue {
public:

    stack<int> s;
    stack<int> s2;

    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        if(s.empty() && s2.empty()) return -1;
        
        if(s2.empty()){
            while(!s.empty()){
                s2.push(s.top());
                s.pop();
            }
        }

        int element = s2.top();
        s2.pop();

        return element;
    }
    
    int peek() {
        if(s.empty() && s2.empty()) return -1;
        
        if(s2.empty()){
            while(!s.empty()){
                s2.push(s.top());
                s.pop();
            }
        }

        int element = s2.top();

        return element;
    }
    
    bool empty() {
        return s.empty() && s2.empty();
    }
};

int main(){

    MyQueue q;
    q.push(1);
    q.push(2);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;

    return 0;
}