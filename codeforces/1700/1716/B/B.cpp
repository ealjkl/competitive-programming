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

void printVector(vi &v) {
    for (auto el: v) {
        cout << el << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    cout << n << endl;
    vi p(n);  
    for (int i = 1; i <= n; i++) {
        p[i - 1] = i;
    }
    printVector(p);

    for (int i = 0; i < n - 1; i++) {
        swap(p[i], p[i + 1]);
        printVector(p);
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