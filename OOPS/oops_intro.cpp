#include <iostream>
using namespace std;

class Teacher{

    // access modifiers - public, private and protected
    public:

    // object's properties
    string name;
    string dept;
    string subject;

    private:
    double salary;

    public:
    // setter 
    void setSalary(double s){
        salary = s;
    }
    // getter
    double getSalary(){
        return salary;
    }

};

int main(){

    // creation of object
    Teacher t1;

    // object's properties initialization
    t1.name = "Riya Sharma";            
    t1.dept = "CSE";
    t1.subject = "C++";
    // t1.salary = 100000;
    t1.setSalary(60000);

    // printing properties of object
    cout<<"Name: "<<t1.name<<endl;
    cout<<"Department: "<<t1.dept<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    // cout<<"Salary: "<<t1.salary<<endl;
    cout<<t1.getSalary()<<endl;


    // // creation of object in HEAP
    // Teacher *T = new Teacher;
    // (*T).name = "Riya Sharma";
    // (*T).dept = "CSE";
    // (*T).subject = "C++";
    // (*T).salary = 50000;

    // cout<<"Name: "<<T->name<<endl;
    // cout<<"Department: "<<T->dept<<endl;
    // cout<<"Subject: "<<T->subject<<endl;
    // cout<<"Salary: "<<T->salary<<endl;
    

    return 0;
}