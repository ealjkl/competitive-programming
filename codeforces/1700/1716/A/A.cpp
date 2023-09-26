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
    int ans = n/3;
    // debug(n % 3);
    // debug(ans);
    // debug(n);
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 1;
    }
    if ((n % 3 == 1) || (n % 3 == 2 )) {
        ans += 1;
    }
    return ans;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        cout << solve() << endl;
    } 
}