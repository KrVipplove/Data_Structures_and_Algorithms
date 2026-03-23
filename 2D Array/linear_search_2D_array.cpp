#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int column;
    cout<<"Enter the number of column: ";
    cin>>column;

    int matrix[row][column];

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix[i][j];
        }
    }

    int key;
    cout<<"Enter the target you want to find: ";
    cin>>key;

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(matrix[i][j] == key){
                cout<<"Target is at: ("<<i<<" , "<<j<<")"<<endl;
            }
        }
    }
}