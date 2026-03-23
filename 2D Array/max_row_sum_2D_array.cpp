#include <iostream>
#include <climits>
using namespace std;



int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int column;
    cout<<"Enter the number fo columns: ";
    cin>>column;

    int matrix[row][column];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix[i][j];
        }
    }

    int maxSum = INT_MIN;
    for(int i=0; i<row; i++){
        int currSum = 0;
        for(int j=0; j<column; j++){
            currSum += matrix[i][j];
        }
        maxSum = max(maxSum, currSum);
    }

    cout<<"Maximum row sum: "<<maxSum<<endl;
    return 0;
}