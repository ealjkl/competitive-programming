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
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);

        int even1 = 0, even2 = 0, odd1 = 0, odd2 = 0;
        for (int i =  0; i < n; i++) {
            cin >> a[i];
            if (i % 2 == 0) {
                if (a[i] % 2 == 1) odd1 = 1;
                else even1 = 1;
            } else {
                if(a[i] % 2 == 1) odd2 = 1;
                else even2 = 1; 
            }
        }

        if (even1 && odd1) {
            cout << "NO" << endl;
        } else if (even2 && odd2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }    
}