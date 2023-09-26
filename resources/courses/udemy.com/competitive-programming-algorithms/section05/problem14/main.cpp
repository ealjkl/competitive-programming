#include<bits/stdc++.h>
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"
using namespace std;

void toggleRow(vector<vector<int>> &grid, int i) {
    for (int j = 0; j < grid[i].size(); j++) {
        grid[i][j] = (grid[i][j] == 1 ? 0: 1);
    }
}

void toggleCol(vector<vector<int>> &grid, int j) {
    for (int i = 0; i < grid.size(); i++) {
        grid[i][j] = (grid[i][j] == 1? 0: 1);
    }
}

int countBitsCol(vector<vector<int>> &grid, int j) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        count += grid[i][j];
    }
    return count;
}

int matrixScore(vector<vector<int>> grid) {
    int R = grid.size(); //rows 
    int C = grid[0].size();
    for (int i = 0; i < R; i++) {
        if (grid[i][0] == 0) {
            toggleRow(grid, i);
        }
    }
    for (int j = 1; j < C; j++) {
        int cb_col = countBitsCol(grid, j);
        if(cb_col < (C - cb_col)) {
            toggleCol(grid, j);
        }
    }

    int sum = 0;
    for (auto row : grid) {
        for (int j = 1; j <= C; j++) {
            sum += (row[C - j] << (j - 1));
        }
    }
    return sum;
}

int main() {
    // println(matrixScore({
    //     {0, 0, 1, 1},
    //     {1, 0, 1, 0},
    //     {1, 1, 0, 0}
    // }));
    println(matrixScore({
        {0,1,0,1,1,1,0,1,1,1,0,1,0,0},
        {1,0,1,0,1,1,0,1,0,1,0,0,0,0},
        {1,0,1,0,1,1,0,0,1,1,1,0,0,1},
        {1,0,1,1,0,0,1,1,0,1,0,1,0,0},
        {1,0,1,1,0,0,0,0,0,1,1,0,1,0},
        {0,0,0,0,0,1,0,1,1,1,0,0,0,1},
        {0,1,0,0,0,1,1,0,0,1,0,1,1,0},
        {1,0,1,0,1,0,1,1,1,1,1,0,0,1},
        {1,0,1,1,1,0,1,1,0,0,0,0,0,0},
        {1,1,0,0,0,1,1,0,0,0,0,0,0,1},
        {1,1,1,0,1,1,1,1,0,0,1,1,0,1},
        {0,1,0,1,0,1,1,1,1,1,1,0,1,0},
        {1,0,0,1,1,1,0,0,0,0,0,1,1,1},
        {1,1,0,1,0,0,0,1,1,1,0,1,1,0}
    }));
}