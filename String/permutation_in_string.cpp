#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkInclusion(string s1, string s2){
    int n1 = s1.length(), n2 = s2.length();

    if(n1>n2) return false;

    vector<int> freq(26,0), winFreq(26,0);
    for(int i=0; i<n1; i++){
        freq[s1[i] - 'a']++;
        winFreq[s2[i] - 'a']++;
    }
    if(freq==winFreq) return true;

    for(int i=n1; i<n2; i++){
        winFreq[s2[i] - 'a']++;
        winFreq[s2[i-n1] - 'a']--;
        if(freq == winFreq) return true;
    }
    return false;
}

int main(){
    string s1, s2;
    cout<<"Enter the first string ";
    cin>>s1;

    cout<<"Enter the second string: ";
    cin>>s2;

    if(!checkInclusion(s1,s2)){
        cout<<"There is no permutation of s1 in s2"<<endl;
    }else{
        cout<<"Permutation of s1 is there in s2"<<endl;
    }

    return 0;
}