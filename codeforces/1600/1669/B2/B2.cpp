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
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        // debug(n);
        bool found = false;
        int found_el;
        map<int, int> m;
        int i = 0;
        for (i; i < n; i++) {
            int el; cin >> el;
            m[el] += 1;
            // cout << el << ": " << m[el] << endl;
            if (m[el] >= 3) {
                found = true; 
                found_el = el;
                break;
            }
        }
        // debug(i);
        for (++i; i < n; i++) {
            int el; cin >> el;
        }
        if (found) cout << found_el << endl;
        else  cout << "-1" << endl;
    }
}