#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

int f(int a, int x) {
    return x/a + x % a;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        int l, r, a; cin >> l >> r >> a;
        int c1 = r;
        int c2 = max(r - r % a - 1, l);
        int max_val = max(f(a, c1), f(a, c2));
        // for (int x = r; x >= last; x--) {
        //     int val = x/a + (x % a);
        //     if (val >= max_val) max_val = val;
        // }
        cout << max_val << endl;
    }
}   
