#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& chars, int n){
    int i=0, j=n-1;
    while(i<j){
        swap(chars[i],chars[j]);
        i++;
        j--;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<char> chars;
    cout<<"Enter the characters in the array: ";
    for(int i=0; i<n; i++){
        char temp;
        cin>>temp;
        chars.push_back(temp);
    }

    reverseString(chars,n);
    cout<<"Reversed string: ";
    for(char c: chars){
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}