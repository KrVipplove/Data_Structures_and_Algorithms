#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>>&mat, int r, int c, string path, vector<string>& ans){
    int m = mat.size();
    int n = mat[0].size();

    if(r < 0 || c < 0 || r >= m || c >= n || mat[r][c] == 0 || mat[r][c] == -1){
        return;
    }
    if(r==m-1 && c== n-1){
        ans.push_back(path);
        return;
    }

    mat[r][c] = -1;

    // up
    helper(mat, r-1, c, path+"U", ans);
    // down
    helper(mat, r+1, c, path+"D", ans);
    // left
    helper(mat, r, c-1, path+"L", ans);
    // right
    helper(mat, r, c+1, path+"R", ans);

    mat[r][c] = 1;
}

int main(){
    int r;
    cout<<"Enter the number of rows in maze: ";
    cin>>r;

    int c;
    cout<<"Enter the number of columns in maze: ";
    cin>>c;

    vector<vector<int>> mat(r, vector<int>(c));
    cout<<"Define the maze row by row:"<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>mat[i][j];
        }
    }

    string path = "";
    vector<string> ans;

    if (mat.empty() || mat[0].empty() || mat[0][0] == 0) {
        cout << "No path exists" << endl;
        return 0;
    }
    

    helper(mat, 0, 0, path, ans);

    cout<<"Toatal path to reach the end: "<<ans.size()<<endl;
    cout<<"Paths:"<<endl;
    for(string val : ans){
        cout<<val<<endl;
    }

    return 0;
}