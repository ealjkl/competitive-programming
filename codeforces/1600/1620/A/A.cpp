#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve() {
    int w, h; cin >> w >> h;
    int k; 

    cin >> k;
    vi a1(k);
    for (int i = 0; i < k; i++) cin >> a1[i];
    int cand1 = (a1[k - 1] - a1[0])*h;

    cin >> k;
    vi a2(k);
    for (int i = 0; i < k; i++) cin >> a2[i];
    int cand2 = (a2[k - 1] - a2[0])*h;

    cin >> k;
    vi b1(k);
    for (int i = 0; i < k; i++) cin >> b1[i];
    int cand3 = (b1[k - 1] - b1[0])*w;

    cin >> k;
    vi b2(k);
    for (int i = 0; i < k; i++) cin >> b2[i];
    int cand4 = (b2[k - 1] - b2[0])*w;

    cout << max({cand1, cand2, cand3, cand4}) << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}