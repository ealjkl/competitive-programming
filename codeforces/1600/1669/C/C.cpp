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
    int n;
    while (t--) {
        int evensParity = 0;
        int oddsParity = 0;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int el;
            cin >> el;
            a.push_back(el);
        };
        bool ok = true;
        for(int i = 0; i < n - 2; i+=2) {
            if (a[i] % 2 != a[i + 2] % 2 ) {
                ok = false;
                break;
            }
        }
        for (int i = 1; i < n - 2; i+=2) {
            if (a[i] %2 != a[i + 2] % 2) {
                ok = false;
                break;
            }
        }
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}