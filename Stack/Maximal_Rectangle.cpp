#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int>& nums){
    int n = nums.size();
    stack<int> s;
    int maxArea = 0;

    for(int i=0; i<=n; i++){
        int currHeight = (i==n)? 0 : nums[i];

        while(!s.empty() && currHeight <= nums[s.top()]){
            int height = nums[s.top()];
            s.pop();

            int width = s.empty()? i : i-s.top()-1;

            maxArea = max(maxArea, height * width);
        }
        s.push(i);
    }
    return maxArea;
}

int maximalRectangle(const vector<vector<char>>& mat){
    if(mat.empty() || mat[0].empty()) return 0;

    int row = mat.size();
    int col = mat[0].size();

    vector<int> heights(col,0);

    int ans = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(mat[i][j] == '0'){
                heights[j] = 0;
            }else{
                heights[j]++;
            }
        }
        ans = max(ans, largestRectangleArea(heights));
    }
    return ans;
}

int main(){
    int row;
    cout<<"Enter the total number of rows: ";
    cin>>row;

    int col;
    cout<<"Enter the totl number of columns: ";
    cin>>col;

    vector<vector<char>> mat(row, vector<char> (col));
    cout<<"Enter the elements of the matrix (row by row): ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>mat[i][j];
        }
    }

    cout<<"Maximum area of rectangle formed by 1 in matrix: "<<maximalRectangle(mat)<<" squared unit"<<endl;

    return 0;
}