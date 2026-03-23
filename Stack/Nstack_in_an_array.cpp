#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Node{
public:
    int index;
    Node* next;

    Node(int x){
        index = x;
        next = nullptr;
    }
};

class NStack{
public:

    int *arr;
    Node **Top;
    stack<int> s;

    NStack(int N, int S){
        arr = new int[S];
        Top = new Node*[N];

        for(int i = 0; i<N; i++){
            Top[i] = nullptr;
        }

        for(int i = S-1; i>=0; i--){
            s.push(i);
        }
    }

    bool push(int x, int m){
        if(s.empty()) return 0;

        arr[s.top()] = x;
        Node* temp = new Node(s.top());
        s.pop();
        temp->next = Top[m-1];
        Top[m-1] = temp;

        return 1;
    }

    int pop(int m){
        if(Top[m-1] == nullptr) return -1;

        Node* temp = Top[m-1];
        int element = arr[temp->index];
        Top[m-1] = temp->next;
        s.push(temp->index);
        delete temp;

        return element;
    }

    ~NStack(){
        delete[] arr;
        delete[] Top;
    }
};

int main(){
    NStack NS(3,6);
    NS.push(10,1);
}