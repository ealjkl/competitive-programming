#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int k = 0;
        //find max last bit turned on
        while((1 << (k + 1)) <= n - 1) {
            debug(k + 1);
            cout << (1 << (k + 1)) << endl;
            cout << (2 << (k + 1)) << endl;
            ++k; 
        }

        for(int i = (1 << k) - 1; i >= 0; i--) {
            cout << i << ' ';
        }
        for(int i = (1 << k); i < n; i++) {
            cout << i << ' '; 
        }
        cout << endl;
    }
}
