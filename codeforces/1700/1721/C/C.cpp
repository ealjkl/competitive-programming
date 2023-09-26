#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n; cin >> n;
    vi a(n);
    vi b(n);
    REP(i, 0, n) cin >> a[i];
    REP(i, 0, n) cin >> b[i];

    //min
    for (int i = 0; i < n; i++) {
        auto pt = lower_bound(b.begin(), b.end(), a[i]);
        int idx = pt - b.begin();
        cout << b[idx] - a[i] << " ";
    }
    cout << endl;

    //max
    vi dmax(n);

    int curr = b[n - 1]; 
    dmax[n - 1] = curr - a[n - 1]; 
    for (int i = n - 2; i >= 0; i--) {
        if (b[i] - a[i + 1] < 0) {
            curr = b[i];
        }
        dmax[i] = curr - a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << dmax[i] << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();        
    }
}