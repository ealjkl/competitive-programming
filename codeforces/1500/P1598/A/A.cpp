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
    int n; cin >> n;
    string r1, r2; 
    cin >> r1 >> r2;
    bool ans = true;
    for (int i = 0; i < n; i++) {
        if (r1[i] == '1' && r2[i] == '1') ans = false;
    } 
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve(); 
    }
}