#include <iostream>
using namespace std;

class Customer{

    string name;
    int age;
    int account_number;
    int balance;

    public:

    Customer(string name, int age, int account_number, int balance){
        this->name = name;
        this->age = age;
        this->account_number = account_number;
        this->balance = balance;
    }

    void withdraw(int amount){
        if(balance<amount){
            cout<<"Insufficient balance"<<endl;
        }
        if(amount > 0){
            balance-=balance;
        }else{
            cout<<"Invalid Amount"<<endl;
        }
    }

    void deposit(int amount){
        if(amount <= 0){
            cout<<"Invalid amount"<<endl;
        }else{
            balance += amount;
        }
    }

    void updateAge(int a){
        if(a>0 && a<125){
            age = a;
        }else{
            cout<<"Invalid age"<<endl;
        }
    }

    void display(){
        cout<<name<<" "<<age<<" "<<account_number<<" "<<balance<<endl;
    }

};

int main(){

    Customer A1("Riya Sharma", 18, 1, 1000);
    A1.display();
    Customer A2("Shelly", 19, 2, 1010);
    A2.display();
    Customer A3("Vipplove", 21, 3, 1100);
    A3.display();
    A1.updateAge(23);
    A1.display();

    

}