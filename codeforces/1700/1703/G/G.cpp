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
    vector<int> sums(64);
    unsigned long long total = 0;
    REP(i, 0, n) cin >> a[i];

    const int sizeB = sizeof(uint) * 8;
    vector<bitset<sizeB>> bs(n);

    for (int i = 0; i < n; i++) {
        bitset<sizeB> b(a[i]);
        bs[i] = b;
        // cout << b << endl;
        for (int j = 0; j < 64; j++) {
            sums[j] += b[j];
        }
        total += a[i];
    }
    println(sums);
    
    int coins = total;
    int j = 0;
    for (int i = 0; i < n; i++) {
        int cand_remaining = total/2 - sums[j]/2;  
        int cand_lost = total - cand_remaining;
        println("sums[j]", sums[j]);
        println("total", total);
        println("cand_remaining", cand_remaining);
        println("cand_lost", cand_lost);
        int toLoose; 
        println(k, cand_lost);
        if (k < cand_lost) {
            toLoose = k;
            total -= a[i];
        } else {
            toLoose = cand_lost;
            // println("a[i]", a[i]);
            total = total - cand_lost - a[i]/2;
            
            j++;
        }
        //modify sum
        for (int r = 0; r < 64; r++) {
            sums[r] -= bs[i][r];
        }
        println("toLose", toLoose);
        print();
        coins -= toLoose;
    }
    println(coins);
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}