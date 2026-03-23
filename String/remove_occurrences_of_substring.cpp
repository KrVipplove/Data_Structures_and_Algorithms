#include <iostream>
using namespace std;

string removeOccurrences(string& str,string part){
    while(str.length()>0 && str.find(part) < str.length()){
        str.erase(str.find(part), part.length());
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    string part;
    cout<<"Enter the part you want to remove: ";
    getline(cin,part);

    removeOccurrences(str,part);
    cout<<"String after removing part: "<<str<<endl;

    return 0;
}