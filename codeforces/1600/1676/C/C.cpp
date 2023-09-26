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
    int n, m; 
    cin >> n >> m;
    vector<string> words(n);
    for (int i = 0; i < n; i++) cin >> words[i];
    int mi = 30*m;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int cost = 0;
            for (int k = 0; k < m; k++) {
                int diff = ((int) words[i][k]) - ((int) words[j][k]);
                // debug(words[i][k]);
                // debug(words[j][k]);
                // debug(diff);
                // debug(abs(diff));
                cost += abs(diff);
            }
            if (cost < mi) mi = cost;
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