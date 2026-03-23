#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string part){
    string partCopy = part;
    reverse(partCopy.begin(), partCopy.end());

    return part==partCopy;
}

void helper(string s, vector<string>& temp, vector<vector<string>>& ans){
    if(s.size()==0){
        ans.push_back(temp);
        return;
    }

    for(int i=0; i<s.size(); i++){
        string part = s.substr(0,i+1);
        if(isPalindrome(part)){
            temp.push_back(part);
            helper(s.substr(i+1), temp, ans);
            temp.pop_back();
        }
    }

}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    vector<string> temp;
    vector<vector<string>> ans;

    helper(s, temp, ans);

    cout<<"Palindromes partitions are:"<<endl;
    for(auto& res : ans){
        for(string val : res){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}