#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve(int k, int n, int m) {
    int x, y; cin >> x >> y;
    bool north = (y > m);
    bool east = (x > n);
    string ans = "divisa";
    if (x == n || y == m) {
        cout << ans << endl;
        return;
    }
    if (north && east) ans = "NE";
    else if (north && !east) ans = "NO";
    else if (!north && east)  ans = "SE"; 
    else if (!north && !east) ans = "SO"; 
    cout << ans << endl;
}

signed main() {
    int maxIter = 1000;
    while(maxIter--) {
        int k; cin >> k;
        int k2 = k;
        int n, m; cin >> n >> m;
        while(k2--) {
            solve(k, n, m);
        }
    }
}