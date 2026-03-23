#include <iostream>
#include <stack>
#include <string>
using namespace std;

string compare(string& s){
    
    stack<char> st;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='#'){
            if(!st.empty()) st.pop();
        }else{
            st.push(s[i]);
        }
    }

    string res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    return res;
}

int main(){
    string s;
    cout<<"Enter the first string: ";
    cin>>s;

    string t;
    cout<<"Enter the second string: ";
    cin>>t;

    if(compare(s) == compare(t)){
        cout<<"Both strings are same"<<endl;
    }else{
        cout<<"Strings are not same"<<endl;
    }

    return 0;
}