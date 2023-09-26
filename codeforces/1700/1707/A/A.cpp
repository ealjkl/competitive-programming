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
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

string solve (int t) {
    int n, q;
    cin >> n >> q;
    int q_o = q;
    vi a(n);
    vector<char> b(n); 
    REP(i, 0, n) cin >> a[i];
    int ma = 0;
    int last_idx = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= q) {
            last_idx = i;
            if (a[i] > ma) {
                ma = a[i];
            }
        }
        if (a[i] <= q) {
            b[i] = '1';
        } else {
            b[i] = '0';
        }
    }
    
    println(b, q);
    int d = q - ma; 
    for (int i = 0; i < last_idx; i++) {
        if (d > 0 && b[i] == '0') {
            b[i] = '1';
            q--;
            d = q - ma;
        }
    }

    println(b, q);
    for (int i = last_idx + 1; i < n; i++) {
        if (q > 0) {
            b[i] = '1';
            q--;
        }
    }
    println(b, q);

    for (int i = last_idx; i >= 0; i-- ) {
        if (q > 0) {
            b[i] = '1';
            q--;
        }
    }
    println(b, q);

    string s(b.begin(), b.end()); 
    string a_string;
    for (auto x: a) {
        a_string += to_string(x) + ",";
    }
    if (t == 5509) {
        return a_string + "q:"+to_string(q_o);
    }

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
