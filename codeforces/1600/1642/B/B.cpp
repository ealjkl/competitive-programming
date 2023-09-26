#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set<int> se;
        for (int i = 0; i < n; i++) {
            int el; cin >> el;
            se.insert(el);
        }
        int se_size = se.size();
        for (int i = 1; i <= n; i++) {
            cout << max(i, se_size) << endl;
        }


    }
}