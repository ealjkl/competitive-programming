#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n, k; cin >> n >> k;
    vi p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    int counter = 0;
    for (int i = 0; i < k; i++) {
        if (p[i] > k) {
            counter++;
        }
    }
    cout << counter << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
     solve();   
    }
}