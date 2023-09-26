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

//is sorted after modification (multiplications)
bool isModSorted(vi &x, int start, int k) {
    for (int i = start; i < start + k; i++) {
        if (x[i] >= 2*x[i + 1]) {
            return false; 
        }
    }
    return true;
}

int solve() {
    int n, k; cin >> n >> k;
    vi a(n);
    REP(i, 0, n) cin >> a[i];
    int total = 0;

    for (int i = 0; i < n - k; i++) {
        if (isModSorted(a, i, k)) total++; 
    }

    return total;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int ans = solve();
        cout << ans << endl;
    } 
}