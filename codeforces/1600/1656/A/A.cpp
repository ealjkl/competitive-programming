#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define vi vector<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve() {
    int n; cin >> n;    
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    auto max_idx = max_element(a.begin(), a.end()) - a.begin();
    auto min_idx = min_element(a.begin(), a.end()) - a.begin(); 
    cout << max_idx + 1 << " " << min_idx + 1 << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}