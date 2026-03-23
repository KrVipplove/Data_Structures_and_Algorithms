#include <iostream>
#include <exception>
using namespace std;

// class exception{
//     protected:
//     string msg;

//     public:
//     exception(string msg){
//         this->msg = msg;
//     }

//     string what(){
//         return msg;
//     }
// };

// class runtime_error : public exception{
//     public:
//     runtime_error(const string &msg) : exception(msg){
        
//     }
// };

class Customer{
    protected:
    string name;
    int balance;
    int account_number;

    public:
    Customer(string name, int balance, int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    void deposit(int amount){
        if(amount>0){
            balance += amount;
            cout<<"Rs."<<amount<<" is credited to your account no "<<account_number<<"."<<endl;
            cout<<"Total available balance: Rs."<<balance<<endl;
        }else{
            throw runtime_error("Amount should be greater than 0.");
        }
    }

    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance -= amount;
            cout<<"Rs."<<amount<<" has been debited to your account."<<endl;
        }else if(amount>balance){
            throw runtime_error("Insufficient fund!");
            // throw "Insufficient fund!";
        }else{
            throw runtime_error("Amount should be greater than 0.");
        }
    }
};

int main(){
    Customer C("Riya Sharma", 5000, 227);

    try{
    C.deposit(100);
    C.withdraw(10000);
    C.deposit(200);
    }catch(const runtime_error &e){
        cout<<"Error: "<<e.what()<<endl;
    }catch(const bad_alloc &e){
        cout<<"Error: "<<e.what()<<endl;
    }/*catch(const char &e){
        cout<<"Error: "<<e<<endl;
    }*/catch(...){
        cout<<"Error: 404"<<endl;
    }
    
    return 0;
}