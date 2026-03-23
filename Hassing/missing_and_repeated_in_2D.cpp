#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> missAndRepeat(vector<vector<int>>& grid){
    vector<int> ans;
    unordered_set<int> s;
    int n = grid.size();
    int miss, rep;

    long long actualSum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            actualSum += grid[i][j];
            if(s.find(grid[i][j]) != s.end()){
                rep = grid[i][j];
            }
            s.insert(grid[i][j]);
        }
    }
    int expectedSum = (n*n) * (n*n + 1) / 2;
    miss = expectedSum + rep - actualSum;

    ans.push_back(miss);
    ans.push_back(rep);

    return ans;
}

vector<int> findMissAndRepeat(vector<vector<int>> grid){                                       // Method 2
    int miss, rep;
    int n = grid.size();
    vector<int> freq(n*n+1, 0);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            freq[grid[i][j]]++;
        }
    }

    for(int i=1; i<=n*n; i++){
        if(freq[i]==0){
            miss = i;
        }else if(freq[i]==2){
            rep = i;
        }
    }
    return {rep,miss};

}

int main(){
    int n;
    cout<<"Enter the size of the grid: ";
    cin>>n;

    vector<vector<int>> grid(n, vector<int>(n));
    cout<<"Enter the elements of the grid (row by row): "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j];
        }
    }
    
    vector<int> res = missAndRepeat(grid);
    cout<<"Missing and repeated values are: "<<res[0]<<" and "<<res[1]<<" respectively"<<endl;
    return 0;
}