#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

void solve() {
    int m; cin >> m;
    vector<vector<int>> grid(2);

    REP(i , 0, m) {
        int cell;
        cin >> cell;
        grid[0].push_back(cell);
    }
    
    REP(i , 0, m) {
        int cell;
        cin >> cell;
        grid[1].push_back(cell);
    }

    int cand1 = 0;
    int secs = 0;
    //case 1 moves right first
    for (int i = 1; i < m; i++) {
        int time = grid[0][i];
        println("secs, time", secs, time);
        time = time - secs;
        secs += max(1, time);
    }
    for (int i = m - 1; i >= 0; i--) {
        int time = grid[1][i];
        println("secs, time", secs, time);
        time = time - secs;
        secs+= max(1, time);
    }
    println(secs);
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    } 
}