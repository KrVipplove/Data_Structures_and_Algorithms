#include <iostream>
using namespace std;

bool isPalindrome(string s){
    int start = 0, end = s.length()-1;

    while(start<end){
        if(!isalnum(s[start])){
            start++;
            continue;
        }
        if(!isalnum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[start]) != tolower(s[end])){
            return false;
        }else{
            start++;
            end--;
        }
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    if(isPalindrome(s)){
        cout<<"Entered string is a palindrome."<<endl;
    }else{
        cout<<"Entered string is not a palindrome."<<endl;
    }
    return 0;
}