#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define vi vector<ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vi a(n);
        int required = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int min_el = a[0];
        int max_el = a[0];
        for (int i = 0; i < n; i++) {
            if (a[i] < min_el) min_el = a[i];
            if (a[i] > max_el) max_el = a[i];
            required += a[i] + 1;
        }
        required = required + max_el - min_el;
        if (required > m) cout << "NO" << endl; 
        else cout << "YES" << endl;
    }
}