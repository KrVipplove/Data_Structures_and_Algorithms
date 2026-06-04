#include <iostream>
#include <unordered_set>
using namespace std;

// It contains only unique elements
// Performs Search, Insert, Delete operations in O(1) time complexity, & uses hashing technique

int main(){
    unordered_set<int> s;

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