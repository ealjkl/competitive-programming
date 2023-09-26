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
        int x; cin >> x;
        if (x < 1400) cout << "Division 4" << endl;
        else if (x < 1600) cout << "Division 3" << endl;
        else if (x < 1900) cout << "Division 2" << endl;
        else cout << "Division 1" << endl;
    }
}