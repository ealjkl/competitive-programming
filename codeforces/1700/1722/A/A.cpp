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

bool solve(string &check) {
    int n; cin >> n;
    string spelling; cin >> spelling;
    sort(spelling.begin(), spelling.end());
    return spelling == check;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    string check = "Timur";
    sort(check.begin(), check.end());

    while (t--) {
        if (solve(check)) {
            cout << "YES" << endl;  
        } else {
            cout << "NO" << endl;
        }
    }
}