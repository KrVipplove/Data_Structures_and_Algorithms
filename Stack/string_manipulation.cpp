#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int stringManipulation(vector<string>& s){
    stack<string> st;

    for(string str : s){
        if(!st.empty() && str == st.top()){
            st.pop();
        }else{
            st.push(str);
        }
    }

    return st.size();
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<string> s(n);
    cout<<"Enter the strings of the array: ";
    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    int reqNumber = stringManipulation(s);

    cout<<"Size of stack after removing adjacent duplicate: "<<reqNumber<<endl;

    return 0;
}