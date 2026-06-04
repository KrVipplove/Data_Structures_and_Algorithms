#include <iostream>
#include <map>
using namespace std;

// Holds the properties of map along with duplication in key

int main()
{
    multimap<int, int> m;

    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(20, 230));
    // m.insert(make_pair(50, 30));
    // m[100] = 10;        // this is used to insert or update in map

    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    // m.erase(40);
    // if(m.count(40)){
    //     cout<<m[40]<<endl;
    // }

    return 0;
}