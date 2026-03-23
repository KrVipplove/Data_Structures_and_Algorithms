#include <iostream>
#include <queue>
using namespace std;

// METHOD 1 (using single queue)
/*
class MyStack {
public:

    queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        cout<<x<<" pushed"<<endl;
        q.push(x);
    }
    
    int pop() {
        if(q.empty()) return -1;


        int n = q.size() - 1;

        while(n--){
            q.push(q.front());
            q.pop();
        }
        
        int element = q.front();
        cout<<element<<" poped"<<endl;

        q.pop();

        return element;
    }
    
    int top() {
        if(q.empty()) return -1;

        int n = q.size() - 1;
        
        while(n--){
            q.push(q.front());
            q.pop();
        }
        
        int element = q.front();

        q.push(q.front());
        q.pop();

        return element;
    }
    
    bool empty() {
        return q.empty();
    }
};
*/



// METHOD 2 (using two queue) (worst solution)
/*
class MyStack {
public:

    queue<int> q;
    queue<int> q2;

    MyStack() {
        
    }
    
    void push(int x) {
        if(!q.empty()){
            q.push(x);
        }else{
            q2.push(x);
        }
    }
    
    int pop() {
        if(q.empty() && q2.empty()) return -1;

        int element;
        if(!q.empty()){
            while(q.size() > 1){
                q2.push(q.front());
                q.pop();
            }
            element = q.front();
            q.pop();
        }else{          // if q2 is empty
            while(q2.size() > 1){
                q.push(q2.front());
                q2.pop();
            }
            element = q2.front();
            q2.pop();
        }
        return element;
    }
    
    int top() {
        if(q.empty() && q2.empty()) return -1;

        int element;
        if(!q.empty()){
            while(q.size() > 1){
                q2.push(q.front());
                q.pop();
            }
            element = q.front();
            q2.push(q.front());
            q.pop();
        }else{          // if q2 is empty
            while(q2.size() > 1){
                q.push(q2.front());
                q2.pop();
            }
            element = q2.front();
            q.push(q2.front());
            q2.pop();
        }
        return element;
    }
    
    bool empty() {
        return q.empty() && q2.empty();
    }
};
*/



// METHOD 3 (optimal)

class MyStack{
    public:
    queue<int> q;

    MyStack(){

    }

    bool empty(){
        return q.empty();
    }

    void push(int x){
        int n = q.size();
        q.push(x);
        while(n--){
            q.push(q.front());
            q.pop();
        }
    }

    int pop(){
        if(empty()) return -1;

        int element = q.front();
        q.pop();
        return element;
    }

    int top(){
        if(empty()) return -1;

        return q.front();
    }
};


int main(){
    MyStack s;
    s.push(1);
    s.push(2);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.empty()<<endl;

    return 0;
}