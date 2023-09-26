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
    int n, k; cin >> n >> k;
    int ans = n*2;
    int m1 = min(k - 1, n - k);
    ans += m1 + n;
    cout << ans << endl;
}

signed main() {
        solve();
}