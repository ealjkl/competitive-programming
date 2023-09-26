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

    vector<pair<int, int>> points(n);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = {x, y};
    }

    int max_x = 0;
    int max_y = 0;
    int min_x = 0;
    int min_y = 0;

    for (int i = 0; i < n; i++) {
        max_x = max(points[i].first, max_x);
        max_y = max(points[i].second, max_y);
        min_x = min(points[i].first, min_x);
        min_y = min(points[i].second, min_y);

    }

    return 2*(max_x + max_y - min_x - min_y);
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}