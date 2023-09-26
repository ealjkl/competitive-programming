#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int a = min(n, m);
        int b = max(n, m);
        int ans = 2*a - 2;
        if ((a == 1) && (b > 2)){
            ans = -1;
            cout << ans << endl;
            continue;
        }
        if ((b - a) % 2  == 0) ans += (b - a)*2;
        else ans += (b - a - 1)*2 + 1;
        cout << ans << endl;
    }
}