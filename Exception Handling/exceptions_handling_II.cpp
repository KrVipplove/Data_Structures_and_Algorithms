#include <iostream>
using namespace std;

int main(){
    double a, b;
    cout<<"Enter the value of 'a' and 'b' with space: ";
    cin>>a>>b;

    try{
        if(b==0){
            throw "Division with 0 is not possible.";
        }
        double c = a/b;
        cout<<"Required answer: "<<c<<endl;
    }catch(const char *e){
        cout<<"Error: "<<e<<endl;
    }
    return 0;
}




