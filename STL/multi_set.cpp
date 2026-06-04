#include <iostream>
#include <set>
using namespace std;

// Holds the same properties of set along with duplicate elements in it

int main(){
    multiset<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(30);

    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}