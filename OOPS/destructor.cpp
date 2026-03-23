// #include <iostream>
// using namespace std;

// class Customer{
//     string name;
//     int *data;

//     public:
//     Customer(){
//         name = "Riya Sharma";
//         data = new int;
//         *data = 10;
//         cout<<"Constructor is called."<<endl;
//     }

//     ~Customer(){
//         delete data;
//         cout<<"Distructor is called."<<endl;
//     }
// };

// int main(){
//     Customer A1;


//     return 0;
// }









#include <iostream>
using namespace std;

class Customer{

    string name;
    int *data;

    public:

    Customer(){
        name = "4";
        cout<<"Default constructor is called. "<<name<<endl;
    }
    Customer(string name){
        this->name = name;
        cout<<"Constructor is called. "<<name<<endl;
    }

    ~Customer(){
        cout<<"Distructor is called. "<<name<<endl;
    }

};

int main(){

    Customer A1("1");
    Customer A2("2");
    Customer A3("3");
    Customer *A4 = new Customer;
    delete A4;


}