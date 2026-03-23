#include <iostream>
#include <vector>
#include <string>
using namespace std;

int stringCompression(vector<char>& chars){
    int n = chars.size();
    int idx = 0;

    for(int i=0; i<n; i++){
        char temp = chars[i];
        int freq = 0;


        while(i<n && temp==chars[i]){
            freq++;
            i++;
        }
        if(freq==1){
            chars[idx++]=temp;
        }else{
            chars[idx++]=temp;
            string str = to_string(freq);
            for(char dig: str){
                chars[idx++]=dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    
    vector<char> chars(s.begin(), s.end());

    cout<<"Size of string after string compression: "<<stringCompression(chars)<<endl;
    cout<<"Compressed string: ";
    for(char ch: chars){
        cout<<ch;
    }
    cout<<endl;

    return 0;
}