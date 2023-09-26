#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

int value(char c) {
    return ((int) c) - 96; 
}

void solve() {
    string s; cin >> s; 
    string cand1 = s.substr(0, s.length() - 1);
    string cand2 = s.substr(1, s.length());

    string ans = "Bob";

    int alice1 = 0, alice2 = 0, sum = 0, alice;
    int maxEvenLength = (s.length()/2) * 2;


    for (auto c: s) {
        sum += value(c); 
    }
    for (int i = 0; i < maxEvenLength; i++) {
        alice1 += value(s[i]);
    }
    for (int i = 0; i < maxEvenLength; i++) {
        alice2 += value(s[s.length() - i - 1]);
    }
    alice = max(alice1, alice2);
    int bob = sum - alice;

    if (alice > bob) {
        cout << "Alice " << alice - bob << endl;
    } else {
        cout << "Bob " << bob - alice << endl;
    }
    
    // cout << cand1 << " " << alice1 << " " << cand2 << " " << alice2 << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}