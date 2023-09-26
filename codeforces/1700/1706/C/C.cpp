#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vi;
typedef pair<int, int> pi;
#define int long long
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)
// #include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

int solve() {
    int n; cin >> n;
    vi h(n); REP(i, 0, n) cin >> h[i];
    vi need(n); 

    for (int i = 1; i < n - 1; i++) {
        // println("i:", i);
        need[i] = max(max(h[i - 1], h[i + 1]) + 1 - h[i], 0LL);
    }


    int total = 0;
    if (n % 2 == 1) {
        for (int i = 1; i < n; i+=2) {
            total += need[i];
        }
        return total;
    }

    //cumulative sums
    vi right(n); 
    vi left(n);

    right[n - 2] = need[n - 2];
    right[n - 3] = need[n - 3];
    for (int i = n - 4; i >= 1; i-=2) {
        right[i] = right[i + 2] + need[i];
    }
    for (int i = n - 5; i >= 1; i-=2) {
        right[i] = right[i + 2] + need[i];
    }

    left[1] = need[1];
    left[2] = need[2];
    for (int i = 3; i < n - 1; i+=2) {
        left[i] = left[i - 2] + need[i];
    }
    for (int i = 4; i < n - 1; i+=2) {
        left[i] = left[i - 2] + need[i];
    }

    // println(h, "h");
    // println(need, "need");
    // println(left, "left");
    // println(right, "right");
    
    int best = INT64_MAX;
    
    for (int i = 1; i < n - 1; i+=2) {
        int c1 = left[i] + right[i + 2];     
        int c2 = left[i] + right[i + 3];     
        int c = min(c1, c2);
        // println(i, i + 2, i + 3, "idx");
        // println(left[i], "left");
        // println(right[i + 2], right[i + 3], "rigth op");
        // println(c1, c2, "candidates");
        if (c < best) {
            best = c;
        }
        // println(best, "best\n");
    }
    
    for (int i = 2; i < n - 1; i+=2) {
        int c = left[i] + right[i + 2];     
        // println(i, i + 2, i + 3, "idx");
        // println(left[i], "left");
        // println(right[i + 2], right[i + 3], "rigth op");
        if (c < best) {
            best = c;
        }
        // println(best, "best\n");
    }
    return best;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}

