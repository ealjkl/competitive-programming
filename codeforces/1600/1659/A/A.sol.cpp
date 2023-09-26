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
    int n, r, b;    
    cin >> n >> r >> b;

    int p = r/(b + 1);
    int q = r%(b + 1);

    for (int i = 0; i < q; i++) {
        cout << string(p + 1, 'R') << 'B';
    }
    for (int i = q; i < b; i++) {
        cout << string(p, 'R') << 'B';
    }
    cout << string(p, 'R') << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    } 
}