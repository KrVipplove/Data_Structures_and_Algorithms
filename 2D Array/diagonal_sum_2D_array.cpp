#include <iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the size of the squared matrix: ";
    cin>>n;

    int matrix[n][n];
    cout<<"Enter the elements of the matrix: ";
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==i){
                sum += matrix[i][j];
            }else if(j==n-i-1){
                sum += matrix[i][j];
            }
        }
    }

    cout<<"Diagonal sum of squared matrix: "<<sum<<endl;

    return 0;
}