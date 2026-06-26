#include <iostream>
#include <utility>
using namespace std;

int main(){

    // MAX HEAP
    /*
    priority_queue<int> p;

    // insert
    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);

    cout<<"Top element: "<<p.top()<<endl;

    // delete
    p.pop();
    cout<<"Top element: "<<p.top()<<endl;

    // size
    cout<<"Size: "<<p.size()<<endl;

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;
    */



    // MIN HEAP

    priority_queue<int, vector<int>, greater<int>> p;
    // insert
    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);

    cout<<"Top element: "<<p.top()<<endl;

    // delete
    p.pop();
    cout<<"Top element: "<<p.top()<<endl;

    // size
    cout<<"Size: "<<p.size()<<endl;

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;

}