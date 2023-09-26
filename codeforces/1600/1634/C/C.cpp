#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve() {
    int n, k; cin >> n >> k; 
    if (k == 1) {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i++) {
            cout << i << endl;
        }
        return;
    }
    if (n % 2 == 0) {
        //for every column
        cout << "YES" << endl;
        int c = 0;
        int i = 1, j = 2;
        while(c < n*k) {
            int a = 0;
            while(a < k) {
                cout << i << " ";
                a++;
                c++;
                i += 2;
            }
            cout << endl;
            a = 0;
            while(a < k) {
               cout << j << " ";  
               a++;
               j += 2;
               c++;
            }
            cout << endl;
            a = 0;
        }
        return;
    }
    cout << "NO" << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}