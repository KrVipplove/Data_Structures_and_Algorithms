#include <iostream>
using namespace std;

class Animal{
    public:
    // virtual void speak(){
    //     cout<<"HUHU"<<endl;
    // }

    virtual void speak()=0;                                             // Abstract Class
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"BARK"<<endl;
    }
};

class Cat : public Animal{
    public:
    void speak(){
        cout<<"MEOW"<<endl;
    }
};

int main(){
    // Animal *P;
    // P = new Dog();
    // P->speak();

    Animal *p;
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cat());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(int i=0; i<animals.size(); i++){
        p = animals[i];
        p->speak();
    }

}