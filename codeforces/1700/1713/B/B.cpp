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

string solve() {
    int n; cin >> n;
    vi a(n);
    REP(i, 0, n) cin >> a[i];
    
    for (int i = 0; i < n - 1; i++) {
        int d = a[i + 1] - a[i];
        if (d < 0) {
            for (i; i < n - 1; i++) {
                if (a[i + 1] - a[i] > 0) {
                    return "NO";
                }
            }
        }
    }
    return "YES";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}