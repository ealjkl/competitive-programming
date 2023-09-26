#include <bits/stdc++.h>

using namespace std;

int INF = 10e10;
int solve(int x, vector<int> &coins) {
    if (x < 0) return INF;
    if (x = 0) return 0;
    int mi = INF;
    for (auto c: coins) {
        mi = min(solve(x - c, coins) + 1, mi);
    }
    return mi;
}
