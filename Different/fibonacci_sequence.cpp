#include <iostream>
using namespace std;

void fibonacci(int n){
    int t1 = 0;
    int t2 = 1;
    int nextterm;

    for(int i=1; i<=n; i++){
        cout<<t1<<" ";
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
}

int main(){
    int n;
    cout<<"Enter the nth term: ";
    cin>>n;

    fibonacci(n);
    cout<<endl;
    return 0;
}