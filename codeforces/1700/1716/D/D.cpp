#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

vector<int> find_all(int k, int n, vector<int> &pos) {
    int r = 1; 
    vi ans;
    if (k ==  n) {
        return {n};
    }
    vi all_k_1 = find_all(k + 1, n, pos);
    while (r*k <= n) {
        if (r*k <= n) {
            pos[r*k - 1]++;
        }
        ans.push_back(r*k);
        for (auto el: all_k_1) {
            if (k == 3) {
                // println("debugging 3");
                // println(ans);
                // println(r, k, r*k);
            }
            if (r*k + el <= n) {
                ans.push_back(r*k + el);
            }
            if (r*k + el <= n) {
                pos[r*k + el - 1]++;
            }
        }
        r++;
    }
    println("k", k, ans);
    return ans;
}

void solve() {
    int n, k; 
    cin >> n >> k;
    vector<int> pos(n); 
    find_all(k , n, pos);

    for (auto el: pos) {
        cout << el << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}