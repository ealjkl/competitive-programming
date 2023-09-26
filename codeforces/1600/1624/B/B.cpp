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
        int a, b, c; cin >> a >> b >> c;
        int top1, top2, top3;
        float m;
        bool ok = false;
        if ((top1 = (2*b - c)) % a == 0 && top1 > 0) {
            ok = true;
        } 
        if ((top2 = (a + c)) % (2 * b) == 0 && top2 > 0) {
            ok = true;
        } 
        if ((top3 = (2*b - a)) % c == 0 && top3 > 0) {
            ok = true;
        }
        cout << (ok ? "YES" : "NO") << endl;;
    }
}