#include <iostream>
#include <string>
using namespace std;

void n_bit_binary(int n, int ones, int zeros, int idx, string& temp){

    if(idx==n){
        cout<<temp<<endl;
        return;
    }
    if(zeros>ones){
        return;
    }
    

    temp.push_back('1');
    n_bit_binary(n, ones+1, zeros, idx+1, temp);
    temp.pop_back();
    if(ones>zeros){
        temp.push_back('0');
        n_bit_binary(n, ones, zeros+1, idx+1, temp);
        temp.pop_back();
    }
}

int main(){
    int n;
    cout<<"Enter the number of bits of binary: ";
    cin>>n;

    string temp;

    cout<<"All the n-bit binary having 1's more than 0's:"<<endl;
    n_bit_binary(n, 0, 0, 0, temp);
    
    return 0;
}