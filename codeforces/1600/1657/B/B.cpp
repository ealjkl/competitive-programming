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
    int n, B, x, y; 
    cin >> n >> B >> x >> y;
    int tot = 0;
    int ai = 0; 
    for (int i = 1; i <= n; i++) {
        if (ai + x <= B) {
            ai += x;
            tot += ai;
        } else {
            ai -= y;
            tot += ai;
        }         
    }
    cout << tot << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}