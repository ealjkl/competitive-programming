#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    // cout << l1 << " " << r1 << " "<< l2 << " " << r2  << " "<< endl;

    int ma = max(l1, l2);
        // debug(r1);
        // debug(r2);
        // debug(ma);
    if (r2 >=  ma && r1 >= ma) {
        cout << ma;
    } else {
        cout << l1 + l2;
    }
    cout << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}