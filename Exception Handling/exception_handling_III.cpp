#include <iostream>
// #include <exception>
using namespace std;

// class exception{
//     protected:
//     string msg;

//     public:
//     exception(string msg){
//         this->msg = msg;
//     }

//     void what(){
//         cout<<msg<<endl;
//     }
// };

int main()
{
    try
    {
        int *p = new int[1000000000000000];
        cout << "Memory allocation successful." << endl;
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Error (line 8): " << e.what() << endl;
    }
    return 0;
}