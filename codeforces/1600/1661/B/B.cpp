#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl


int solve(int v) {
    int to_add;
    int best = 15;
    for (to_add = 0; to_add < 15; to_add++) {
        int max_iter = 15;
        int k = 0;
        int v2 = v + to_add;
        int prop;
        while((v2 % 2 == 0) && (max_iter--)) {
            v2 = v2/2;
            k++;
        }
        if (15 - k + to_add < best) {
            best = 15 - k + to_add;
        }
    }
    return best;
}

signed main() {
    int n; cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << solve(a[i]) << " ";
    }
}