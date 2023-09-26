#include <bits/stdc++.h>
using namespace std;
#define uint unsigned long 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

void solve() {
    int n, k; 
    cin >> n >> k;
    vector<uint> a(n);
    unsigned long long total = 0;
    REP(i, 0, n) cin >> a[i];

    //temp
    vi cumsums(n);
    vi cumsums_losts(n);
    vi curr_losts(n);
    cumsums[n - 1] = a[n - 1];
    cumsums_losts[n - 1] = a[n - 1] - a[n - 1]/2;
    curr_losts[n - 1] = a[n - 1] - a[n - 1]/2;
    for (int i = n - 2; i >= 0; i--) {
        cumsums[i] = cumsums[i + 1] + a[i];
        curr_losts[i] = a[i] - a[i]/2;
        cumsums_losts[i] = cumsums_losts[i + 1] + (a[i] - a[i]/2);
    }
    println(a);
    println(cumsums);
    println(cumsums_losts);
    println(curr_losts);
    //temp

    ll total_rem = 0;
    ll total_loose;
    for (int i = 0; i < n; i++) {
        // cout << b << endl;
        total += a[i];
        total_rem += a[i]/2;
    }
    total_loose = total - total_rem;
    
    ll coins = total;
    ll j = 0;

    //Good keys
    ll i = 0;
    for (i = 0; i < n; ++i) {
        if (k > total_loose) {
            break;
        }

        ll toLoose; 
        toLoose = k;
        total -= a[i];
        total_rem = total/2;
        total_loose = total - total_rem;
        coins -= toLoose;
        println("coins", coins);
        print();
    }

    // Bad keys
    println("i", i);
    long rho = 1; 
    for (j = i; j < n; j++) {
        ll toLoose = a[j] - (a[j] >> rho);
        coins -= toLoose;
    }

    println("COINS", coins);
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}