#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l1;
    l1.push_back(1);        // push_back
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    cout<<"First element: "<<l1.front()<<", Last element: "<<l1.back()<<endl;

    l1.push_front(5);       // push_front
    l1.push_front(6);
    l1.push_front(7);
    cout<<"First element: "<<l1.front()<<", Last element: "<<l1.back()<<endl;

    cout<<"Size of list: "<<l1.size()<<endl;

    l1.pop_back();          // pop_back
    cout<<"First element: "<<l1.front()<<", Last element: "<<l1.back()<<endl;

    l1.pop_front();         // pop_front
    cout<<"First element: "<<l1.front()<<", Last element: "<<l1.back()<<endl;

    cout<<"Size of list: "<<l1.size()<<endl;


    // Iterator in C++;
    cout<<"All elements of list: ";
    for(auto /*(list<int>::iterator)*/ it = l1.begin(); it != l1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"All elements of list in reversed order: ";
    for(auto it=l1.rbegin(); it!=l1.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}