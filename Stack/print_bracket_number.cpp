#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

vector<int> printBracketNumber(string s){
    vector<int> ans;
    stack<int> st;

    int count = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            count++;
            st.push(count);
            ans.push_back(count);
        }else if(s[i] == ')'){
            ans.push_back(st.top());
            st.pop();
        }
    }
    return ans;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    vector<int> res = printBracketNumber(s);

    cout<<"Bracket in number forms is/are: ";
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}