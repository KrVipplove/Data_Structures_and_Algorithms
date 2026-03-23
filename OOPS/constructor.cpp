#include <iostream>
using namespace std;

class Customer{

    string name;
    long long account_no;
    int balance;

    public:
    // default constructor
    Customer(){
        cout<<"Default constructor is called."<<endl;
        name = "Riya Sharma";
        account_no = 7632779832;
        balance = 100000;
    }

    void display(){
        cout<<"Details of "<<name<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Account No: "<<account_no<<endl;
        cout<<"Balance: "<<balance<<endl<<endl;
    }

    // // parameterised constructor
    // Customer(string name, long long int account_no, int balance){
    //     cout<<"Parameterised constructor is called."<<endl;
    //     this->name = name;
    //     this->account_no = account_no;
    //     this->balance = balance;
    // }

    Customer(string a, long long int b){
        cout<<"Two-argument constructor is called."<<endl;
        name = a;
        account_no = b;
        balance = 00000;
    }

    inline Customer(string a, long long int b, int c) : name(a), account_no(b), balance(c){
        cout<<"Inline constructor is called."<<endl;
    }


};

int main(){
    Customer A1;
    A1.display();
    Customer A2("Shelly", 3372933237, 10000);
    A2.display();
    Customer A3("Sanskriti", 696969696969);
    A3.display();


}