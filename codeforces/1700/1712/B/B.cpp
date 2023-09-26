#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n; cin >> n;
    vi p(n + 1);
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    if (n == 2) {
        cout << 2 << " " << 1 << endl;
        return;
    }
    if (n&1) {
        p[1] = 1;
        for (int i = 2; i <= n; i+=2) {
            p[i] = i + 1;
        }
        for (int i = 3; i <=n; i+=2) {
            p[i] = i - 1;
        }
    } else {
        for (int i = 1; i <=n; i+=2) {
            p[i] = i+ 1;
        }
        for (int i = 2; i <= n; i+=2) {
            p[i] = i - 1;
        }
    }
    for (int i = 1; i < n + 1; i++) {
        cout << p[i] << " ";
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