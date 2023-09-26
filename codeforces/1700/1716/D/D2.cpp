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

//pos is an array of n + 1 elements, the zero element is a sentinel
void find_all(int k, int n, vi &pos) {
    vi current;  
    //all before k are imposible to reach
    for (int i = 1; i <= k; i++) {
        pos[i] = 0;
    }
    pos[k] = 1;
    for () {

    }
}


void solve() {
    int n, k; 
    cin >> n >> k;
    vector<int> pos(n);

    find_all();

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