#include <iostream>
#include <vector>
using namespace std;

bool searchInRow(vector<vector<int>>& matrix, int midR, int target){
    int start = 0, end = matrix[midR].size() - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(target == matrix[midR][mid]){
            return true;
        }else if(target < matrix[midR][mid]){
            end = mid - 1;
        }else{
            start = mid+1;
        }
    }
    return false;
}

bool searchIn2D(vector<vector<int>>& matrix, int target){
    int m = matrix.size(), n = matrix[0].size();
    int sR = 0, eR = m-1;

    while(sR <= eR){
        int midR = sR + (eR - sR)/2;
        if(target >= matrix[midR][0] && target <= matrix[midR][n-1]){
            return searchInRow(matrix, midR, target);
        }else if(target < matrix[midR][0]){
            eR = midR-1;
        }else{
            sR = midR+1;
        }
    }
    return false;
}

int main(){
    int row, column;
    cout << "Enter rows and columns: ";
    cin >> row >> column;
    

    vector<vector<int>> matrix(row, vector<int> (column));
    cout<<"Enter the elements of the matrix: ";
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