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

int solve() {
    int n; cin >> n;
    int q; cin >> q; 
    vector<int> h(n);
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
      cin >> h[i] >> w[i];
    }
    vector<int> hs(q); 
    vector<int> ws(q); 
    vector<int> hb(q); 
    vector<int> wb(q); 
    for (int i = 0; i < q; i++) {
      cin >> hs[i] >> ws[i] >> hb[i] >> wb[i]; 
    }

}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      cout << solve() << endl;  
    }
}