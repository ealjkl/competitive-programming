#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> board(n);
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }
    ii ro;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (found) break;
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 'R') {
                ro = {i, j};
                found = true;
                break;
            }
        }
    }

    bool ok = true;
    ii ro2 = {-1, -1};
    for (int i = ro.fi + 1; i < n; i++) {
        for (int j = 0; j < ro.se; j++) {
            if (board[i][j] == 'R') {
                ro2 = {i, j};
                ok = false;
                break;
            }
        }
    }


    if (ok) cout << "YES" << endl; 
    else cout << "NO" << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}