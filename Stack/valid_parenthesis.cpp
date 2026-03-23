#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool validParenthesis(string& s){
    stack<char> st;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }else{
            if(st.empty()){
                return false;
            }
            if((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[')){
                st.pop();
            }else{
                return false;
            }
        }
    }

    return st.empty();
}

int main(){
    string s;
    cout<<"Enter the string parenthesis: ";
    cin>>s;

    if(validParenthesis(s)){
        cout<<s<<" is valid Parenthesis"<<endl;
    }else{
        cout<<s<<" is not valid Parenthesis"<<endl;
    }

    return 0;
}