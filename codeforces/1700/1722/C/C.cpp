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
    int n; cin >> n;
    
    vector<vector<string>> v(3, vector<string>(n));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    unordered_map<string, pair<int, vector<int>>> m;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            m[v[i][j]].first++;
            m[v[i][j]].second.push_back(i);
        }
    }

    vector<int> points(3);

    for (auto &[key, val]: m) {
        int counter = val.first;
        auto to_update = val.second;
        int to_add = 0;
        if (counter == 1) {
            to_add = 3;
        } else if (counter == 2) {
            to_add = 1;
        }
        for (auto idx: to_update) {
            points[idx] += to_add;
        }
    }

    for (auto el: points) {
        cout << el << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      solve();  
    }
}