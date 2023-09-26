#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve() {
    int n; cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int mi = *min_element(a.begin(), a.end());
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != mi) {
            cout << a[i] << " " << mi << endl;
            count += 1;
            if (count == n/2) return;
        }
    }
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}