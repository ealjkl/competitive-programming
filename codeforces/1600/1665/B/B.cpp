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
        int max_key = -1; 
        int max_val = 0; 
        map<int, int> counter;
        for (int i = 0; i < n; i++) {
            int el; cin >> el; 
            counter[el]++;
            if (counter[el] > max_val) {
                max_key = el;
                max_val = counter[el];
            }
        }
        // int to_change = (n - max_val);
        // debug(to_change);
        float no_copies = ceil(log2(n/(float) max_val));
        cout << n - max_val + no_copies << endl;
    }
}