#include <iostream>
using namespace std;

class Human{
    protected:
    string name;

    public:

    Human(string name){
        cout<<"Constructor of class Human"<<endl;
        this->name = name;
    }

    void display(){
        cout<<"My name is "<<name<<endl;
    }

    ~Human(){
        cout<<"Distructor of class Human"<<endl;
    }
};

class Engineer : public virtual Human{
    protected:
    string specialization;

    public:

    // Constructor for standalone Engineer object
    Engineer(string name, string specialization) : Human(name){
        cout<<"Constructor of class Engineer"<<endl;
        this->specialization = specialization;
    }

    void work(){
        cout<<"I am a specialist of "<<specialization<<endl;
    }

    ~Engineer(){
        cout<<"Distructor of class Engineer"<<endl;
    }
};

class Youtuber : public virtual Human{
    protected:
    int subscriber;

    public:

    Youtuber(string name, int subscriber) : Human(name){
        cout<<"Constructor of class Youtuber"<<endl;
        this->subscriber = subscriber;
    }
    
    void contentCreater(){
        cout<<"I have a subscriber base of "<<subscriber<<endl;
    }

    ~Youtuber(){
        cout<<"Distructor of class Youtuber"<<endl;
    }
};

class codeTeacher : public Engineer, public Youtuber{
    protected:
    // string name;
    int salary;

    public:

    codeTeacher(string name, string specialization, int subscriber, int salary) : Human(name), Engineer(name, specialization), Youtuber(name, subscriber){
        cout<<"Constructor of class codeTeacher"<<endl;
        // this->name = name;
        this->salary = salary;
    }

    void showcase(){
        cout<<"My monthly salary is "<<salary<<endl;
        work();
        contentCreater();
    }

    ~codeTeacher(){
        cout<<"Distructor of class codeTeacher"<<endl;
    }
};



int main(){

    codeTeacher A("Riya Sharma","SDE",50000,100000);
    A.display();
    A.showcase();

    Engineer E("Shelly", "AI");
    E.display();
    E.work();
    
    
}