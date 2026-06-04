#include <iostream>
#include <unordered_set>
using namespace std;

// Holds the properties of unordered_set with duplicate elements

int main(){
    unordered_multiset<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(50);
    s.insert(80);
    s.insert(30);
    s.insert(40);
    s.insert(10);

    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}