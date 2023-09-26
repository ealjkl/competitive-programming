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
    if (a[0] < 0 || a[n - 1] > 0) {
        cout << "NO\n";
        return;
    }
    if (a[1] < -a[0]) {
        cout << "NO\n";
        return;
    }
    if (a[n - 2] > -a[n - 1]) {
        cout << "NO\n";
        return;
    }
    if (a[1] == -a[0] && n > 2 && a[3] != 0) {
        cout << "NO\n";
        return;
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