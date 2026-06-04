#include <iostream>
#include <unordered_map>
using namespace std;

// unique keys are present
// data may not be sorted
// hashing implementation

int main(){
    unordered_map<int,int> m;

    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(20, 230));
    m.insert(make_pair(50, 30));
    m[20] = 70;

    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}