#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve () {
    int n; cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i]; 
    int neg = 0;
    for (int i = 0; i < n; i++ ) {
        if (a[i] < 0) neg++;
    }

    for(int i = 0; i < neg - 1; i++) {
        if (abs(a[i]) < abs(a[i + 1])) {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = neg; i < n - 1; i++) {
        if (abs(a[i]) > abs(a[i + 1])) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();        
    }
}