#include <iostream>
#include <vector>
using namespace std;

bool helper(vector<vector<int>>& grid, int row, int col, int n, int expVal){

    if(row < 0 || col < 0|| row >= n || col >= n || expVal != grid[row][col]) return false;

    if(expVal == n*n-1) return true;

    bool ans1 = helper(grid, row-2, col-1, n, expVal+1);
    bool ans2 = helper(grid, row-2, col+1, n, expVal+1);
    bool ans3 = helper(grid, row+2, col-1, n, expVal+1);
    bool ans4 = helper(grid, row+2, col+1, n, expVal+1);
    bool ans5 = helper(grid, row-1, col-2, n, expVal+1);
    bool ans6 = helper(grid, row+1, col-2, n, expVal+1);
    bool ans7 = helper(grid, row-1, col+2, n, expVal+1);
    bool ans8 = helper(grid, row+1, col+2, n, expVal+1);

    return (ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8);
}

int main(){
    int n;
    cout<<"Enter the size of the grid: ";
    cin>>n;

    vector<vector<int>> grid(n,vector<int>(n));
    cout<<"Enter the elements of the grid row by row:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j];
        }
    }

    if(helper(grid, 0, 0, n, 0)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    return 0;
}