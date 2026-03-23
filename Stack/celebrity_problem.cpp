#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int celebrity(const vector<vector<int>>& mat){
    int n = mat.size();
    stack<int> s;

    for(int i=0; i<n; i++){
        s.push(i);
    }

    while(s.size() > 1){
        int first = s.top();
        s.pop();

        int second = s.top();
        s.pop();

        if(mat[first][second]){
            s.push(second);
        }else{
            s.push(first);
        }
    }

    if(s.empty()) return -1;

    int canBeCeleb = s.top();

    int rowSum = 0, colSum = 0;
    for(int i=0; i<n; i++){
        rowSum += mat[canBeCeleb][i];
        colSum += mat[i][canBeCeleb];
    }

    if(rowSum == 1 && colSum == n){
        return canBeCeleb;
    }else{
        return -1;
    }
}

int main(){
    int n;
    cout<<"Enter the total number of person in party: ";
    cin>>n;

    vector<vector<int>> mat(n, vector<int> (n));

    cout<<"Enter the elements of the matrix (row by row): ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }

    int celeb = celebrity(mat);
    if(celeb == -1){
        cout<<"There is no celebrity in the party"<<endl;
    }else{
        cout<<celeb<<"th person is the celebrity"<<endl;
    }

    return 0;
}