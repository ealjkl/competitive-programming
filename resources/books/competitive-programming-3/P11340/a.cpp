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
    int k; cin >> k;
    map<char, int> prices;
    while(k--) {
        char ch; cin >> ch;
        int price; cin >> price;
        prices[ch] = price;
    }
    int m; cin >> m;
    cin.ignore();
    vector<string> lines(m);
    for (int i = 0; i < m; i++) {
        string line;
        getline(cin, line);
        lines[i] = line;
    }

    double total = 0;
    for (auto line: lines) {
        for (auto ch: line) {
            if (prices.find(ch) != prices.end()) {
            //could have worked prices.contains(ch)
                total += prices[ch];
            }
        }
    }

    // cout << total/100 << "." << total%100;
    // if (total %100 < 10) {
    //     cout << 0;        
    // }
    // cout << "$" << endl;
    printf("%0.2lf$\n", total/100);
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}