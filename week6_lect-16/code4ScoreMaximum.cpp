#include<iostream>
#include<vector>
using namespace std;
int matrixScore(vector<vector<int>> &grid){
    int row = grid.size();
    int cols = grid[0].size();
    // making the first column all 1's using row flip
    for (int i = 0; i < row; i++)
    {
        if (grid[i][0] == 0)
        { // flip
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == 0)
                    grid[i][j] = 1;
                else
                    grid[i][j] = 0;
            }
        }
    }
    // fliping columns which have max 0's
    for (int j = 0; j < cols; j++)
    {
        int noz = 0;
        int noo = 0;
        for (int i = 0; i < row; i++)
        {
            if (grid[i][j] == 0)
                noz++;
            else
                noo++;
        }
        if (noz > noo)
        { // flip
            for (int i = 0; i < row; i++)
            {
                if (grid[i][j] == 0)
                    grid[i][j] = 1;
                else
                    grid[i][j] = 0;
            }
        }
    }
    // decimal conversion of each row
    int sum2 = 0;
    for (int i = 0; i < row; i++)
    {
        int mult = 1, sum = 0, x = 1;
        for (int j = cols - 1; j >= 0; j--)
        {
            x = mult * grid[i][j];
            mult = mult * 2;
            sum = sum + x;
        }
        sum2 = sum2 + sum;
    }
    return sum2;
}
int main(){
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    vector<int> v2;
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);
    vector<int> v3;
    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(0);
    v3.push_back(0);
    vector< vector<int> > grid;
    grid.push_back(v1);
    grid.push_back(v2);
    grid.push_back(v3);
    
    cout<<matrixScore(grid);
}