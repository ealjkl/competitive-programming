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
        vector<int> a(n);
        int required = 0;
        string ans = "YES";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1; i++) {
            required += a[i] + 1;
        }
        required+= a[n - 1]*2 + 1 - a[0]; 
        // debug(required);
        // debug(m);
        if (required > m) ans = "NO";
        cout << ans << endl;
    }
}