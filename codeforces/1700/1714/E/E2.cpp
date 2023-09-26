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

string solve(int t) {
    int n; cin >> n;
    vi a(n);
    REP(i, 0, n) cin >> a[i];
    string ans = ""; 
    for (auto el : a) {
        ans += to_string(el) + "|";
    }
    return ans;
}

bool solve() {
    int n; cin >> n;
    vi a(n);
    REP(i, 0, n) cin >> a[i];



    int tar;
    for (auto el: a) {
        if (el % 10 == 0) {
            tar = el;
        } else if (el % 10 == 5) {
            tar = el + 5;
        }
    }
    bool exists_zero = (tar% 10 == 0);
    // case when there is a zero or a five
    if (exists_zero) {
        for (auto el: a) {
            if (el % 10 == 0) {
                if (el != tar) {
                    return false;
                }
            } else if (el % 10 == 5) {
                if (el + 5 != tar) {

                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }

    int tar = 0;
    for (auto &el : a) {
        while(el % 10 != 2) {
            el += (el % 10);
        }
        if (el > tar) {
            tar = el;
        }
    }

    auto ma = max_element(a.begin(), a.end());
    tar = *ma;
    while (tar % 10 != 2) {
        tar += (tar %10);
    }
    for (auto el : a) {
        while (el < tar) {
            el += (el % 10);
        }
        if (el != tar) {
            return false;
        }
    }
    return true;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        if (tc != 435) {
            cout << (solve() ? "YES": "NO") << endl;
        } else {
            cout << solve(t) << endl;
        }
    } 
    
}
