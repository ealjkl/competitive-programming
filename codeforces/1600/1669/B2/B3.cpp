#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

//you didn't notice that the elements had an upper bound
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> cnt(n); 
        int ans = -1;
        for (int i = 0; i < n; i++) {
            int el; cin >> el;
            cnt[el - 1] += 1;
            if (cnt[el - 1] >= 3) {
                ans = el;
            }
        }
        cout << ans << endl;
    }
}