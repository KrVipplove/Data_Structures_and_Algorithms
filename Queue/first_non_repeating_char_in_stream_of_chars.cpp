#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

string firstNonRepeatingCharInStreamOfCharacters(string& str){
    int n = str.size();
    queue<char> q;
    vector<int> arr(26,0);
    string newStr = "";

    for(int i=0; i<n; i++){
        arr[str[i]-'a']++;
        if(arr[str[i]-'a'] == 1){
            q.push(str[i]);
        }

        while(!q.empty() && arr[q.front() - 'a'] > 1){
            q.pop();
        }

        if(!q.empty()){
            newStr.push_back(q.front());
        }else{
            newStr.push_back('#');
        }
    }
    return newStr;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    // getline(cin,s);
    cin>>str;

    string res = firstNonRepeatingCharInStreamOfCharacters(str);
    cout<<"New String: "<<res<<endl;

    return 0;
}