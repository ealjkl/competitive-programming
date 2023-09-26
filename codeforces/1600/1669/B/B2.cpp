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
    string s2;
    cin >> t;
    while (t--) {
        cin >> s2; 
        bool finish = false;
        if (s2[s2.size() - 1] != 'B') {
            cout << "NO" << endl;
            continue;
        }
        int count = 0;
        for (char c: s2) {
            if (c == 'A') count++;
            if (c == 'B') count--; 
            if (count < 0) {
                cout << "NO" << endl;
                finish = true;
                break;
            }
        }
        if (finish) continue;
        cout << "YES" << endl;
    }
}