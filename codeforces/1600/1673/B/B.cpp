#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve() {
    string s; cin >> s;
    map<int, int> freq; 
    string sub = "";
    for (int i = 0; i < s.length(); i++) {
        freq[s[i]] += 1;
        if (freq[s[i]] > 1) {
            break;
        }
        sub.push_back(s[i]);
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != sub[i % sub.length()]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}