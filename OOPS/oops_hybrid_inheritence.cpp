#include <iostream>
using namespace std;

class Student{
    public:
    void print(){
        cout<<"I am a student"<<endl;
    }
};

class Male{
    public:
    void malePrint(){
        cout<<"I am a male"<<endl;
    }
};

class Female{
    public:
    void femalePrint(){
        cout<<"I am a female"<<endl;
    }
};

class Boy : public Student, public Male{
    public:
    void boyPrint(){
        cout<<"I am a boy"<<endl;
    }
};

class Girl : public Student, public Female{
    public:
    void girlPrint(){
        cout<<"I am a girl"<<endl;
    }
};

int main(){
    Girl G;
    G.girlPrint();
    G.femalePrint();

    Boy B;
    B.malePrint();
    B.boyPrint();
}