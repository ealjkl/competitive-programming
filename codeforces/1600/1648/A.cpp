#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<utility>
#include<map>

using namespace std;

int manhatanDistance(pair<int, int> a, pair<int, int> b){
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main(){
    int n, m;
    int color;
    map<int, vector<int>> colorLists;

    // reading input
    cin >> n >> m;
    int table[n][m]; 

    for(int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            cin >> table[r][c];
        }
    }

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            color = table[r][c]; 
            colorLists[color] = vector<int>();
        }
    }

}

