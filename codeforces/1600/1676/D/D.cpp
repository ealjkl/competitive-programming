#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<int, int>
#define vi vector<long>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
 
int findX(int x, int y, int n, int m) {
    return y - x + n - 1;
}
 
int findY(int x, int y, int n, int m) {
    return x + y;
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> bo(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int el; cin >> el;
            bo[i].push_back(el);
        }
    }
    
    vi sums1(n + m - 1);
    vi sums2(n + m - 1);
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int val = bo[i][j];
            int newX = findX(i, j, n, m);
            int newY = findY(i, j, n, m);
 
            sums1[newX] += val;
            sums2[newY] += val;
        }
    }
 
    int ma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int val = bo[i][j];
            int newX = findX(i, j, n, m);
            int newY = findY(i, j, n, m);
            int prop = sums1[newX] - val + sums2[newY]; 
            ma = max(ma, prop);
        }
    }
    cout << ma << endl;
}
 
signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}