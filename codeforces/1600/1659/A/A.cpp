#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve() {
    int n, r, b; cin >> n >> r >> b;
    int x = ceil(r/(b + 1.0));  
    int rem = x*(b + 1) - r;
    int i = 0;
    for (i; i < rem; i++) {
        for (int j = 0; j < x - 1; j++) {
            cout << "R";  
        }
        cout << "B";
    }
    for (i; i < b; i++) {
        for (int j = 0; j < x; j++) {
            cout << "R";
        }
        cout << "B";
    }
    for (int j = 0; j < x; j++) {
        cout << "R";
    }
    cout << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}