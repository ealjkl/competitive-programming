#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

int t, n, m;
signed main() {
    cin >> t;
    while (t--) {
        cin >> n >> m;
        if (n < m) swap(n, m);
        if (m == 1 && n >= 3) cout << -1 << endl;
        else cout << 2*n - 2 - (n + m)%2 << endl;
    }
    return 0;
}