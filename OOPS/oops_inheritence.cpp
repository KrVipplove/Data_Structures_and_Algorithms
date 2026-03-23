#include <iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;
};

class Student : private Human{
    int roll_number;
    int cgpa;

    public:

    Student(){

    }

    Student(string name, int age, int roll_number, int cgpa){
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->cgpa = cgpa;
    }

    void fun(string n, int a, int b, int c){
        name = n;
        age = a;
        roll_number = b;
        cgpa = c;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<cgpa<<endl;
    }
};

int main(){

    Student A1("Riya Sharma", 19, 01, 10);
    A1.display();

    Student A2;
    A2.fun("Shelly", 21, 02, 10);
    A2.display();

    
}