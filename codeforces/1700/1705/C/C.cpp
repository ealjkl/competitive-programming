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

void solve() {
    int n, c, q;
    cin >> n >> c >> q;

    string p;
    cin >> p;
    string s = p;

    vector<pi> lrs(n); 
    vi totals(n);

    for (int i = 0; i < c; i++) {
        cin >> lrs[i].first >> lrs[i].second;
        int l = lrs[i].first, r = lrs[i].second;
        int length = r - l + 1;
        s+=s.substr(l - 1, length);
    }

    for (int i = 0; i < q; i++) { 
        int k; cin >> k;
        cout << s[k - 1] << endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }    
}
