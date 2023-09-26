#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)

string solve (int t) {
    int n, q;
    cin >> n >> q;
    int q_o = q;
    vi a(n);
    vector<char> b(n); 
    REP(i, 0, n) cin >> a[i];

    int Q = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] <= Q) {
            cout << "case 1 \n";
            b[i] = '1';
        } else {
            if (Q < q) {
                cout << "case 2 \n";
                Q++;
                b[i] = '1';
            } else {
                cout << "case 3 \n";
                b[i] = '0';
            } 
        }
    }

    string s(b.begin(), b.end()); 

    return s;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int j = 1; j <= t; j++) {
        cout << solve(j) << endl;
    } 
}
