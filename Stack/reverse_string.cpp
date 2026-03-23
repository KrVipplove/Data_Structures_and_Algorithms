#include <iostream>
#include <string>
#include <stack>
using namespace std;

void reverseString(string& s){
    stack<int> st;

    for(int i=0; i<s.size(); i++){
        st.push(s[i]);
    }

    int i=0;
    while(!st.empty()){
        s[i] = st.top();
        st.pop();
        i++;
    }
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    reverseString(s);

    cout<<"Reverse string: "<<s<<endl;

    return 0;
}