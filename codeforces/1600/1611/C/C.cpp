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
    vi p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    if (p[0] == n) {
        cout << n << " ";
        for (int i = n - 1; i >= 1; i--) {
            cout << p[i]  << " ";
        }
        cout << endl;
        return;
    } 
    if (p[n - 1] == n) {
        for (int i = n - 2; i >= 0; i-- ) {
            cout << p[i] << " ";
        }
        cout << n;
        cout << endl;
        return;
    }
    cout << - 1 << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}