#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve(int n) {
    vector<int> a(n);
    vector<bool> checked(n); 
    checked[0] = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } 

    for (int i = 0; i < n - 1; i++) {
        int dif = abs(a[i] - a[i + 1]); 
        if ( dif < n) {
            checked[dif] = true;
        }
    }

    bool out = true; 
    for (auto el : checked) {
        out *= el;
    }

    if (out) cout << "Jolly" << endl; 
    else cout << "Not jolly" << endl;
}

signed main() {
    int n; 
    while (cin >> n) {
        solve(n);
    }
}