#include <bits/stdc++.h>
using namespace std;
#define int long
#define ll long long
#define ii pair<short, short>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

vector<pair<int, int>> primi_pitago = {
    {3, 4},
    {5, 12},
    {7, 24},
    {8, 15},
    {9, 40},
    {12, 35},
    {20, 21},
    {28, 45}
};


vector<pair<int, int>> getPitago() {
    vector<pair<int, int>> out;
    int i;
    for (auto terna: primi_pitago) {
        i = 1;
        int x  = terna.fi;
        int y = terna.se;
        while((x*i <= 50) && (y*i <= 50)) {
            out.push_back({x*i, y*i}); 
            out.push_back({y*i, x*i});
            i++;
        }
    }
    return out;
}

vector<pair<int, int>> pitago = getPitago();

void solve() {
    int x, y; cin >> x >> y;
    if ((x == 0) && (y == 0)) {
        cout << 0 << endl;
        return;
    }
    if ((x == 0) || (y == 0)) {
        cout << 1 << endl;
        return;
    }
    for (auto &[xx, yy]: pitago) {
        if ((x == xx) && (y == yy)) {
            cout << 1 << endl;
            return;
        }
    } 
    cout << 2 <<endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}