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
// #include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

void solve() {
    int n; cin >>n;
    vi a(n);
    REP(i, 0, n) cin >> a[i];
    unordered_map<int, pair<int, int>> leftm;
    unordered_map<int, pair<int, int>> rightm;
    int ans = 0;

    int pivot = -1;
    for (int i = n - 1; i >=1; i--) {
        int diff = a[i] - a[i - 1];
        if (diff < 0) {
            pivot = i;
            break;
        }
    }
    if (pivot == -1) {
        cout << 0 << endl; 
        return;
    }

    for (int i = 0; i < pivot; i++) {
        leftm[a[i]].first++;
    }

    for (int i = pivot; i < n; i++) {
        rightm[a[i]].first++;
        rightm[a[i]].second = i;
    }

    int max_idx = -1; 
    for (auto &[key, val]: leftm) {
        leftm[key].first = 0;
        if (rightm.count(key) > 0) {
            rightm[key].first = 0;
            if (rightm[key].second > max_idx) {
                max_idx = rightm[key].second;
            }
        }
        ans++;
    }
    // println("ans1: ", ans);
    int oldPivot = pivot;
    pivot = max_idx;
    // println("oldPivot", oldPivot);
    // println("pivot:",  pivot);
    map<int, int> finalm;
    if (pivot > -1) {
        for (int i = oldPivot; i < pivot; i++) {
            if (leftm.count(a[i]) <= 0) {
                finalm[a[i]]++;
            }
        }
    }
    for (auto &[key, val]: finalm) {
        if (key != 0) {
            ans++;
        }
    }
    // println("ans2: ", ans);
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}