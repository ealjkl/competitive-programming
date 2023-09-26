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
    int n; cin >> n;
    int k = log2(n - 1);
    for (int i = 1; i < pow(2, k); i++) {
        cout << i << " ";
    }
    cout << 0 << " ";
    for (int i = pow(2, k); i < n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}