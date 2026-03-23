#include <iostream>
using namespace std;

class Engineer{
    protected:
    string specialization;

    public:

    Engineer(string specialization){
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

class Youtuber{
    protected:
    int subscriber;

    public:

    Youtuber(int subscriber){
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
    string name;

    public:

    codeTeacher(string name, string specialization, int subscriber) : Engineer(specialization), Youtuber(subscriber){
        cout<<"Constructor of class codeTeacher"<<endl;
        this->name = name;
    }

    void showcase(){
        cout<<"My name is "<<name<<endl;
        work();
        contentCreater();
    }

    ~codeTeacher(){
        cout<<"Distructor of class codeTeacher"<<endl;
    }
};

int main(){

    codeTeacher A("Riya Sharma","SDE",100000);
    A.showcase();
    
}