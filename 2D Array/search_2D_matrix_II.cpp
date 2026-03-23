#include <iostream>
#include <vector>
using namespace std;

bool searchIn2D(vector<vector<int>>& matrix, int target){
    if (matrix.empty() || matrix[0].empty()) return false;

    int m = matrix.size(), n = matrix[0].size();
    int r = 0, c = n-1;

    while(r<m && c >= 0){
        if(target == matrix[r][c]){
            return true;
        }else if(target < matrix[r][c]){
            c--;
        }else{
            r++;
        }
    }
    return false;
}

int main(){
    int row, column;
    cout<<"Enter the number of rows and columns: ";
    cin>>row>>column;

    vector<vector<int>> matrix(row, vector<int> (column));
    cout<<"Enter the elements of the matrix (row by row): "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix[i][j];
        }
    }

    int target;
    cout<<"Enter the target you want to find: ";
    cin>>target;

    if(searchIn2D(matrix, target)){
        cout<<"Target found"<<endl;
    }else{
        cout<<"Target not found"<<endl;
    }
    return 0;
}