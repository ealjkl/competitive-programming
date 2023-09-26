#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long

typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)
// #include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

int query(int k, int n, vector<pi> &lrs, vi &firsts) {
    int idx = k - 1;
    //finding group
    if (idx < n) {
        return idx;
    }
    int j = 0;
    while (k >= firsts[j]) {
        if (j >= firsts.size()) {
            break;
        }
        j++;
    }
    j--;

    int newK = lrs[j].first + (k - firsts[j]);
    
    return query(newK, n, lrs, firsts);
}

void solve() {
    int n, c, q;
    cin >> n >> c >> q;

    string p;
    cin >> p;
    string s = p;

    vector<pi> lrs(c + 1); 
    vi lasts(c + 1);

    lrs[0].first = 1;
    lrs[0].second = n;
    for (int i = 1; i < c + 1; i++) {
        cin >> lrs[i].first >> lrs[i].second;
        int l = lrs[i].first, r = lrs[i].second;
        int length = r - l + 1;
        // s+=s.substr(l - 1, length);
    }

    lasts[0] = 1;
    for (int i = 1; i < c + 1; i++) {
        int lPrev = lrs[i - 1].first, rPrev = lrs[i - 1].second; 
        int lengthPrev = rPrev - lPrev + 1;
        lasts[i] = lasts[i - 1] + lengthPrev;
    }

    // println("lasts: ", lasts);
    // int redK = query(10, n, lrs, lasts);
    // println("query 10: ", redK, p[redK]);

    for (int i = 0; i < q; i++) { 
        int k; cin >> k;
        int idx = query(k, n, lrs, lasts);
        cout << p[idx] << endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }    
}
