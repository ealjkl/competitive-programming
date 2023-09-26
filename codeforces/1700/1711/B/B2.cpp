#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define int long long
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define rep(i, a, b) for (int i = a; i < b; i++)
// #include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

void solve() {
    int n, m; 
    cin >> n >> m;


    vi a(n + 1);
    rep(i, 1, n + 1) cin >> a[i];
    vector<pi> fships(m + 1);
    vector<int> candidates;

    vi parities(n + 1);

    for (int i = 1; i <= m; i++) {
        int f1, f2;
        cin >> f1 >> f2;
        fships[i].fi = f1; 
        fships[i].se = f2; 
        parities[f1] += 1; 
        parities[f2] += 1; 
    }

    bool exists_odd_parity = false;
    for (auto parity: parities) {
        if (parity % 2 == 1) {
            exists_odd_parity = true;
            break;
        }
    }

    // println(a, n, m);
    // println(parities);

    if (m % 2 == 0) {
        cout << 0 << endl; 
        return;
    }

    int mi = LONG_LONG_MAX;
    if (exists_odd_parity) {
        for (int i = 1; i <= n; i++) {
            if (parities[i] % 2 == 1 && a[i] < mi) {
                mi = a[i];
            }
        }
    }

    // println("min", mi);
    for (int i = 1; i <= m; i++) {
        auto edge = fships[i];
        int cand = a[edge.fi] + a[edge.se];
        // println("cand", cand);
        if (parities[edge.fi] % 2 == 0 && parities[edge.se] % 2 == 0 && cand < mi) {
            mi = cand;
        }
    }

    cout << mi << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}