#include <iostream>
#include <stack>
using namespace std;

// METHOD 1 (using stack)
/*
int minAddToValidParenthesis(string& s){
    stack<char> st;
    int count = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            st.push(s[i]);
        }else{
            if(st.empty()){
                count++;
            }else{
                st.pop();
            }
        }
    }
    return st.size() + count;
}
*/


// METHOD 2 (space complexity = O(1))
int minAddToValidParenthesis(string& s){
    int balance = 0;
    int count = 0;

    for(char c : s){
        if(c == '('){
            balance++;
        }else{
            if(balance <=0 ){
                count++;
            }else{
                balance--;
            }
        }
    }
    return balance + count;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    int miniNumber = minAddToValidParenthesis(s);

    cout<<"Minimum parenthesis is required is: "<<miniNumber<<endl;

    return 0;
}