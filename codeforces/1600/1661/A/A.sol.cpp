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
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (abs(a[i - 1] - a[i]) + abs(b[i - 1] - b[i]) > abs(a[i - 1] - b[i]) + abs(b[i - 1] - a[i])) {
            swap(a[i], b[i]);
        }
    }
    for (int i = 0; i < n - 1; i++) {
        sum += abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]);
    }
    cout << sum << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}