#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define int long long
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)
// #include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

int solve() {
    int n, k; cin >> n >> k;
    vi a(n);
    REP(i, 0, n) cin >> a[i];
    vector<int> b;

    int total = 0;
    int i = 0;
    while(i < n - 1) {
        int consecutive = 0;
        while(i < n - 1 && a[i] < 2*a[i + 1]) {
            consecutive += 1;
            i++;
        }
        i++;
        b.push_back(consecutive);
    }

    for (auto x: b) {
        total += max(x - k + 1, 0LL);
    }
    // println("a: ", a);
    // println("b: ", b);

    return total;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int ans = solve();
        cout << ans << endl;
    } 
}