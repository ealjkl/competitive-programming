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
        string s;
        cin >> s;

        bool ok = (s.back() == 'B');

        int sum = 0;
        for (auto it: s) {
            if (it == 'A') sum++;
            else sum--;
            if (sum < 0) ok=false;
        }

        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}