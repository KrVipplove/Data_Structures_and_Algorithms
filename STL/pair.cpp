#include <iostream>
#include <utility>
using namespace std;


// pair implementation using class


// pair implementation using STL

int main(){
    
    // SYNTAX for defining pair
    /* pair < data_type1, data_type2 > name_of_pair */


    // defining pair
    pair<string, int> p;
    pair<string, int> q;

    // initialising pair METHOD 1
    p = make_pair("Vipplove", 22);

    cout<<"Name: "<<p.first<<" Age: "<<p.second<<" --type_1"<<endl;


    // initialising pair METHOD 2
    q.first = "Vipplove";
    q.second = 22;

    cout<<"Name: "<<q.first<<" Age: "<<q.second<<" --type_2"<<endl;



    // storing 3 types of data in pair {name, age, weight}

    // MEHTOD 1
    pair<string, pair<int, string>> x;
    
    x.first = "Vipplove";
    x.second.first = 22;
    x.second.second = "72 kg";

    cout<<"Name: "<<x.first<<" Age: "<<x.second.first<<" Weight: "<<x.second.second<<endl;


    // METHOD 2
    pair<string, pair<int, string>> y;
    y = make_pair("Vishwajeet", make_pair(22, "72 kg"));

    cout<<"Name: "<<y.first<<" Age: "<<y.second.first<<" Weight: "<<y.second.second<<endl;


    return 0;
}