#include <iostream>
#include <stack>
#include <algorithm>
#include <utility>
#include <stdexcept>
using namespace std;

// METHOD 1 (using space complexity -> (2*n))

class MinStack{
    public:
    stack<pair<int, int>> s;

    MinStack(){

    }

    void push(int val){
        cout<<val<<" Pushed"<<endl;
        if(s.empty()){
            s.push({val,val});
        }else{
            int minVal = min(val, s.top().second);
            s.push({val,minVal});
        }
    }

    void pop(){
        if(s.empty()){
            return;
        }else{
            cout<<s.top().first<<" Popped"<<endl;
            s.pop();
        }
    }

    int top(){
        if(s.empty()){
            throw runtime_error("Stack is empty");
        }
        return s.top().first;
    }

    int getMin(){
        if(s.empty()){
            throw runtime_error("Stack is empty");
        }
        return s.top().second;
    }

    void printStack() {
        stack<pair<int,int>> temp = s;
        cout << "Stack (top → bottom): ";
        while(!temp.empty()) {
            cout << "(" << temp.top().first << "," << temp.top().second << ") ";
            temp.pop();
        }
        cout << endl;
    }  
};


// METHOD 2 (using space complexity -> O(n))
/*
class MinStack{
    public:

    stack<long long int> s;
    long long int minVal;

    MinStack(){

    }

    void push(int val){
        cout<<val<<" Pushed"<<endl;

        if(s.empty()){
            s.push(val);
            minVal = val;
        }else{
            if(val < minVal){
                s.push((long long)2*val - minVal);
                minVal = val;
            }else{
                s.push(val);
            }
        }
    }

    void pop(){
        if(s.empty()){
            throw runtime_error("Stack is empty");
        }
        cout<<"Top element poped"<<endl;
        if(s.top() < minVal){
            minVal = 2*minVal - s.top();
        }
        s.pop();
    };

    int top(){
        if(s.empty()) throw runtime_error("Stack is empty");

        if(s.top() < minVal){
            return minVal;
        }else{
            return s.top();
        }
    }

    int getMin(){
        if(s.empty()) throw runtime_error("Stack is empty");
        return minVal;
    }

    void printStack(){
        
    }
};
*/

int main(){

    MinStack obj;

    obj.push(-2);
    obj.printStack();

    obj.push(0);
    obj.printStack();

    obj.push(-3);
    obj.printStack();

    cout<<"Minimum: "<<obj.getMin()<<endl;

    obj.pop();
    obj.printStack();

    cout<<"Top: "<<obj.top()<<endl;

    cout<<"Minimum: "<<obj.getMin()<<endl;
}