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
    vector<int> x(n); 
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    bool ok = true;
    bool fixed = false;
    bool left_fixed = false;
    bool right_fixed = false;
    
    for (int i = 0; i < n - 1; i++) {
        int diff = x[i + 1] - x[i];
        if (diff > 3) {
            ok = false;
            break;
        }
        if (diff == 3) {
            if (fixed || left_fixed) {
                ok = false;
                break;
            }
            fixed = true;
            left_fixed = true;
        } 
        if (diff == 2) {
            if (fixed) {
                ok = false;
                break;
            }
            if (!left_fixed) {
                left_fixed = true;
            } else {
                fixed = true;
            }            
        }
    } 
    if (ok) cout << "YES" << endl; 
    else cout << "NO" << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}