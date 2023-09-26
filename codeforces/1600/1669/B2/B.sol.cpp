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
    using namespace std;    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> cnt(n + 1, 0);
        int ans = -1;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (++cnt[x] >= 3) {
                ans = x;
            }
        }
        cout << ans << endl;
    }
}