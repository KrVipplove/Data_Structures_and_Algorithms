#include <iostream>
using namespace std;

class Customer{
    string name;
    int account_number;
    int balance;

    static int total_customer;
    static int total_balance;

    public:

    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_balance += balance;
        total_customer++;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }

    void display_total_customer(){
        cout<<"Total Customer: "<<total_customer<<endl;
    }

    static void accessStatic(){
        cout<<"Total Customer(by static function): "<<total_customer<<endl;
        cout<<"Total balance(by static function): "<<total_balance<<endl;
    }

    void deposit(int amount){
        if(amount>0){
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount){
        if(amount>0 && balance>= amount){
            balance -= amount;
            total_balance -= amount;
        }
    }

};

int Customer :: total_customer = 0;
int Customer :: total_balance = 0;

int main(){
    Customer A1("Riya Sharma", 1, 1000);
    // A1.display();
    Customer A2("Shelly", 2, 1001);
    // A2.display();
    Customer A3("Vipplove", 3,  1002);
    // A3.display();
    // Customer :: total_customer = 10;
    // Customer :: accessStatic();
    // A1.display_total_customer();

    A1.deposit(1000);
    A2.withdraw(500);
    Customer :: accessStatic();


}