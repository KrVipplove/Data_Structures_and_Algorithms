#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col, char dig){
    // verticle check
    for(int i=0; i<9; i++){
        if(board[i][col]==dig){
            return false;
        }
    }

    // horizontal check
    for(int j=0; j<9; j++){
        if(board[row][j]==dig){
            return false;
        }
    }

    // grid check
    int srow = (row/3) * 3;
    int scol = (col/3) * 3;
    for(int i=srow; i< srow+3; i++){
        for(int j=scol; j < scol+3; j++){
            if(board[i][j]==dig){
                return false;
            }
        }
    }
    return true;
}

bool sudokuSolver(vector<vector<char>>& board, int row, int col){

    if(row==9){
        return true;
    }

    int nextRow = row;
    int nextCol = col+1;
    if(col==8){
        nextRow = row+1;
        nextCol = 0;
    }
    if(board[row][col] != '.'){
        return sudokuSolver(board, nextRow, nextCol);
    }

    for(char dig = '1'; dig<= '9'; dig++){
        if(isSafe(board, row, col, dig)){
            board[row][col] = dig;
            if(sudokuSolver(board, nextRow, nextCol)){
                return true;
            }
            board[row][col] = '.';
        }
    }
    return false;
}

int main(){

    vector<vector<char>> board(9, vector<char>(9));
    cout<<"Enter the 9x9 sudoku (use '.' for empty spaces)"<<endl;

    int n = board.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>board[i][j];
        }
    }

    if(sudokuSolver(board, 0, 0)){
        cout<<"Sudoku solution:"<<endl;
        for(auto& ans : board){
            for(char val : ans){
                cout<<val<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<"No solution exist"<<endl;
    }
    return 0;
}