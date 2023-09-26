#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

vector<int> getDivisors(int n) {
    vector<int> out;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) {
            out.push_back(i);
        }
    return out;
}

bool elIsIn(int el, int a, int p, int x) {
    return ((el - a) % p == 0)  && el >= a && el <= a + p * x;
}

void solve() {
    int b, q, y; cin >> b >> q >> y;
    int c, r, z; cin >> c >> r >> z;
    // debug(q);
    vector<int> divisors = getDivisors(r);
    int n_sols = 0;
    for (int i = c; i <= c + r*z; i += r) {
        if (!elIsIn(i, b, q, y)) {
            cout << 0 << endl; 
            return;
        }
    }
    for (auto divisor: divisors) {
        int is_possible = true;

        for (int i = c; i <= c + r*z; i += divisor) {
            // cout << i << " ";
            if (!elIsIn(i, c, r, z) && elIsIn(i, b, q, y)) {
                is_possible = false;
                break;
            }
        } 
        if (is_possible) {
            //check left
            bool not_lower_bound = true;
            bool not_upper_bound = true;
            int lc = 0;
            for (int i = c - divisor; i >= b; i -= divisor) {
                if (elIsIn(i, b, q, y)) {
                    not_lower_bound = false;
                    break;
                };
                lc += 1;
            }

            //check right
            int rc = 0;
            for (int i = c + r*z + divisor; i <= b + q*y; i += divisor) {
                if (elIsIn(i, b, q, y)) {
                    not_upper_bound = false;
                    break;
                };
                rc += 1;
            }

            bool infinite_sols = (not_lower_bound) || (not_upper_bound);
            if (infinite_sols) {
                cout << "-1" << endl;
                return;
            } else {
                n_sols += (rc + 1)*(lc + 1);
            }
        }
    }
    cout << n_sols << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}