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
    for (int i = 0; i < t;  i++) {
        vector<int> a(3);
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << "Case " << i + 1 << ": " << a[1] << endl;
    }
}