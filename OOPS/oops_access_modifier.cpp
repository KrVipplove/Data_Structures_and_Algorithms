#include <iostream>
using namespace std;

class Human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fn(){
        int a = 10;
        cout<<a<<endl;
        int b = 20;
        cout<<b<<endl;
        int c = 30;
        cout<<c<<endl;
    }
};

int main(){
    Human A1;
    A1.fn();
}