#include <iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:

    Human(){
        cout<<"Default constructor of class Human"<<endl;
    }

    Human(string name, int age){
        cout<<"Constructor of class Human"<<endl;
        this->name = name;
        this->age = age;
    }

    void work(){
        cout<<"This is working"<<endl;
    }

    ~Human(){
        cout<<"Distructor of class Human"<<endl;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<endl;
    }



};

class Student : public Human{

    int roll_number;
    int fees;

    public:

    Student(){
        cout<<"Default onstructor of class Student"<<endl;
    }

    Student(string name, int age, int roll_number, int fees) : Human(name, age){
        // this->name = name;
        // this->age = age;
        cout<<"Constructor of class Student"<<endl;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
    }

    ~Student(){
        cout<<"Distructor of class Student"<<endl;
    }

    

};

int main(){
    Student A("Riya Sharma", 21, 01, 10000);
    // A.work();
    A.display();
}