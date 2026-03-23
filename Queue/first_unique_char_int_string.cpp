#include <iostream>
#include <string>
#include <vector>
using namespace std;

int firstUniqueCharInString(string s){
    vector<int> nums(26);
    int n = s.size();

    for(auto &val: s){
        nums[val-'a']++;
    }

    for(int i=0; i<n; i++){
        if(nums[s[i]-'a'] == 1) return i;
    }

    return -1;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    int ans = firstUniqueCharInString(s);

    cout<<"First unique character is at index: "<<ans<<endl;

    return 0;
}