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
    bool ok;
    string s;
    int na = 0, nb = 0;
    cin >> t;
    while (t--) {
        cin >> s;
        ok = s.size() > 1;
        char current = s[0];
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            // debug(i);
            // debug(count);
            // debug(current);
            if (s[i] != current) {
                if (count < 2) {
                    ok = false;
                    break;
                } 
                current = s[i];
                count = 1;
            } else {
                count++;
            }
        }
        if (count < 2) ok = false;
        if (ok) cout << "YES"  << endl; 
        else cout << "NO" << endl;
    }
}