#include <iostream>
#include <vector>
#include <list>
using namespace std;

// STACK using list (METHOD 2)

class Stack{
    list<int> ll;

    public:
    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    int top(){
        return ll.front();
    }

    bool empty(){
        return ll.size() == 0;
    }
};



// STACK using vector (METHOD 1)
/*
class Stack{
    vector<int> nums;

    public:
    void push(int val){
        nums.push_back(val);
    }

    void pop(){
        nums.pop_back();
    }

    int top(){
        return nums[nums.size()-1];
    }

    bool empty(){
        return nums.size() == 0;
    }
};
*/

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}







// STACK using STL
/*
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);


    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}
*/