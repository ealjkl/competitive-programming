#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve() {
    string s; 
    cin >> s;
    string half1 = s.substr(0, 3);
    string half2 = s.substr(3, 3);
    int sum1 = 0;
    int sum2 = 0;
    for (auto a: half1) {
        sum1 += (int) a;
    }
    for (auto a: half2) {
        sum2 += (int) a;
    }
    if (sum1 == sum2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();        
    }
}