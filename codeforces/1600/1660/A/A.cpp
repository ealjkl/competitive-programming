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
    int a, b; cin >> a >> b;
    if (a == 0) {
        cout << 1 << endl;        
        return;
    }
    cout <<  a + 2*b + 1 << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}