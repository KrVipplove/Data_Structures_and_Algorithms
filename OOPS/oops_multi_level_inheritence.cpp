#include <iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:
    Person(string name){
        this->name = name;
    }

    void introduce(){
        cout<<"Hello, my name is "<<name<<endl;
    }
};

class Employee : public Person{
    protected:
    int salary;

    public:
    Employee(string name, int salary) : Person(name){
        this->salary = salary;
    }

    void monthly_salary(){
        cout<<"My monthly salary is "<<salary<<endl;
    }
};

class Manager : public Employee{
    protected:
    string department;

    public:
    Manager(string name, int salary, string department) : Employee(name, salary){
        this->department = department;
    }

    void work(){
        cout<<"I am leading the department "<<department<<endl;
    }
};

int main(){
    Manager M("Vipplove", 200000, "SDE");
    M.introduce();
    M.monthly_salary();
    M.work();
}