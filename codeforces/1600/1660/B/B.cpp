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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n == 1) {
        string out = a[0] == 1 ? "YES" : "NO"; 
        cout << out << endl;
        return;
    }
    int max1 = -1, max2 = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > max2) {
            max2 = a[i];
        }
        if (max2 > max1) {
            swap(max2, max1);
        }
    }

    if (max1 - max2 <= 1) {
        cout << "YES" <<endl;
    } else {
        cout << "NO" << endl;
    }
    
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}