// (POLYMORPHISM-FUNCTION OVERLOADING AND OPERATOER OVERLOADING)


#include <iostream>
using namespace std;

class Complex{

    int real, img;

    public:
    
    Complex(){
        cout<<"Default constructor of Complex"<<endl;
    }

    Complex(int real, int img){
        cout<<"Parameterised constructor of Complex"<<endl;
        this->real = real;
        this->img = img;
    }

    void display(){
        cout<<real<<" + i"<<img<<endl;
    }

    Complex operator +(Complex &Z){                                         //OPERATOR OVERLOADING
        Complex ans;
        ans.real = real + Z.real;
        ans.img = img + Z.img;
        return ans;
    }

    ~Complex(){
        cout<<"Distructor of Complex"<<endl;
    }

};

int main(){
    Complex A(3,2);
    A.display();
    Complex B(4,6);
    B.display();
    Complex C = A+B;
    C.display();
}