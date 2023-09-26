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
    string r1, r2; cin >> r1 >> r2;
    unordered_map<char, int> c;
    c[r1[0]]++;
    c[r1[1]]++;
    c[r2[0]]++;
    c[r2[1]]++;

    vector<int> so;
    for (auto &[key, val]: c) {
        so.push_back(val);
    }
    sort(so.begin(), so.end(), [](int a, int b){return a > b;});
    if (so[0] == 4) {
        return 0;
    }
    if (so[0] == 3) {
        return 1;
    }
    if (so[0] == 2) {
        if (so[1] == 2) {
            return 1;
        }
        if (so[1] == 1) {
            return 2;
        }
    }
    return 3;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        cout << solve() << endl;        
    }
}