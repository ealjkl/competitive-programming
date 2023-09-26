#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve(int s, int b) {
    vector<bool> alive(s + 1); 
    for (int i = 1; i <= s; i++) {
        alive[i] = true; 
    }

    for (int i = 0; i < b; i++) {
        int l, r; cin >> l >> r;
        for (int i = l; i <= r; i++) {
            alive[i] = false; 
        }
        //check left

        int l_ans = 0;
        for (int i = l; i >= 1; i--) {
            if (alive[i]) {
                l_ans = i;
                break;
            } 
        }
        if (l_ans) {
            cout << l_ans << " ";
        } else {
            cout << "*" << " ";
        }

        //check right
        int r_ans = 0;
        for (int i = r; i <= s; i++) {
            if (alive[i]) {
                r_ans = i;
                break;
            }
        }
        if (r_ans) {
            cout << r_ans << endl;
        } else {
            cout << "*" << endl;
        }
    }
    cout << "-" << endl;
}

signed main() {
    int s, b; 
    while(true) {
        cin >> s >> b;
        if (!(b && s)) {
            break;
        }
        solve(s, b);
    }
}