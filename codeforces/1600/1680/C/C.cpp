#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve() {
    string s;
    cin >> s;

    int ones = 0, zeros = 0;
    for (auto c: s) {
        if (c == '0') zeros++; 
        else ones++;
    }
    int rem_ones = ones, left_zeros = zeros;
    int mi = zeros;
    int cu; // current cost

    for (int i = 0; i < s.length(); i++) {
        for (int j = s.length() - 1; j >= i - 1; j--) {
            int left_zeros = count(s.begin() + i, s.begin() + j + 1, '0');
            int rem_ones = ones - count(s.begin() + i, s.begin() + j + 1, '1'); 
            cu = max(left_zeros, rem_ones);
            mi = min(cu, mi);
        }
    }
    cout << mi << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}