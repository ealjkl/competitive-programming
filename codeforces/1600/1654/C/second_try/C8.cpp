#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int t; cin >> t;
    ll n;
    ll total;
    ll a_max, b_max;
    ll b_new1, b_new2;
    while(t--) {
        cin >> n;
        vector<ll> a (n);
        total = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
            total += a[i];
        }

        sort(a.begin(), a.end());

        vector<ll> b = {total};
        cout << b[0] << endl;

        while (a.size() > 0 && b.size() > 0) {
            a_max = a[a.size() - 1];
            b_max = b[b.size() - 1]; 

            if (a_max  > b_max ) {
                cout << "NO";
                break;
            } 

            if (a_max == b_max) {
                a.pop_back();
                b.pop_back();
            }

            if (a_max < b_max) {
                b_new1 = floor(b_max/2.0);
                b_new2 = ceil(b_max/2.0);
            }

        }
    }

    return 0;
}