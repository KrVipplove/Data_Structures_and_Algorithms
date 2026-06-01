#include <iostream>
#include <utility>
#include <set>
using namespace std;


int main(){
    // SET stores only unique elements in sorted order

    set<int, greater<int>> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20);


    cout<<"Elements in the set are: ";
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    // FIND function        find returns the iterator 
    if(s.find(10) != s.end()){
        cout<<"Element is present in the set"<<endl;
    }else{
        cout<<"Element not found!"<<endl;
    }


    // COUNT function       count returns the frequency
    if(s.count(30)){
        cout<<"Element is present in the set"<<endl;
    }else{
        cout<<"Element not found!"<<endl;
    }

    cout<<s.count(20)<<endl;        // output = 1, cause set stores only unique element;


    // ERASE function
    s.erase(20);
    cout<<s.count(20)<<endl;        // output = 0, cause erase function deleted the element (20)

    return 0;
}


class Person{
public:
    string name;
    int age;

};

int main(){
    set<Person> s;

    Person p1, p2, p3, p4;
    p1.name = "Vipplove", p1.age = 22;
    p2.name = "Vishwajeet", p2.age = 22;
    p3.name = "Riya", p3.age = 22;
    p4.name = "Sanskriti", p4.age = 22;

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

}