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
    int n; cin >> n;
    while (n--) {
        string s, t; cin >> s >> t; 
        int idx = s.size() + 1;
        int new_idx;
        string ans = "YES";
        for (int i = t.size() - 1; i >= 0; i--) {
            int new_idx = s.rfind(t[i]);
            s[new_idx] = '-';
            // debug(new_idx);
            // debug(idx);
            if ((new_idx > idx) || (new_idx == -1)) {
                ans = "NO"; 
                break;
            }
            else idx = new_idx;
        }
        cout << ans << endl;
    }
}