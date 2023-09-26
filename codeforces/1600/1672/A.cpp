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
    string first = "errorgorn";
    string second = "maomao90";
    string winner;
    while (t--) {
        int n;
        int cuts_left = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int el;
            cin >> el;
            cuts_left += el - 1;
        }
        if (cuts_left % 2 == 0) winner = second;
        else winner = first;
        cout << winner << endl;
    }
}