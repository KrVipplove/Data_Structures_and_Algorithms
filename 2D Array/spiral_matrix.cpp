#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& matrix){
    int m = matrix.size(), n = matrix[0].size();
    int srow = 0, scol = 0, erow = m-1, ecol = n-1;
    vector<int> ans;

    while(srow <= erow && scol <= ecol){
        for(int j=scol; j<=ecol; j++){
            ans.push_back(matrix[srow][j]);
        }

        for(int i=srow+1; i<=erow; i++){
            ans.push_back(matrix[i][ecol]);
        }

        for(int j=ecol-1; j>=scol; j--){
            if(srow == erow){
                break;
            }
            ans.push_back(matrix[erow][j]);
        }

        for(int i=erow-1; i>srow; i--){
            if(scol == ecol){
                break;
            }
            ans.push_back(matrix[i][scol]);
        }
        srow++, erow--, scol++, ecol--;
    }
    return ans;
}

int main(){
    int row, col;
    cout<<"Enter the number of rows and columns: ";
    cin>>row>>col;

    vector<vector<int>> matrix(row, vector<int>(col));
    cout<<"Enter the elements of the matrix (row by row): "<<endl;
    for(int i=0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>matrix[i][j];
        }
    }

    vector<int> res = spiralMatrix(matrix);

    for(int val: res){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}