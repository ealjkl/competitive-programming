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
#define REP(i, a, b) for (int i = a; i < b; i++)

//they must sum up to zero
//a[0] should be non-negative and greater than 0
//a[-1] should be non positive

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    REP(i, 0, n) cin >> a[i];

    int sum = 0;
    if (n == 1) {
        cout << (a[0] == 0 ? "YES" : "NO") << endl;
        return;
    }

    for (auto el: a) {
        sum += el;
    }
    if (sum != 0) {
        cout << "NO\n";
        return;
    }

    b[0] = a[0];
    for (int i = 1; i < n; i++) {
        b[i] = a[i] + b[i - 1];
    }

    int first_zero_idx = n;
    for (int i = 0; i < n; i++) {
        if (b[i] < 0) {
            cout << "NO\n";
            return;
        } 
        if (b[i] == 0) {
            first_zero_idx = i;
            break;
        }
    }
    for (int j = first_zero_idx; j < n; j++) {
        if (b[j] != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
