#include <bits/stdc++.h>

using namespace std;

//placeholder values
const int N = 10;
int INF = 10e10;

bool ready[N];
int value[N];

int solve(int x, vector<int> &coins) {
    if (x < 0) return INF;
    if (x = 0) return 0;
    if (ready[x]) return value[x]; 
    int mi = INF;
    for (auto c: coins) {
        mi = min(solve(x - c, coins) + 1, mi);
    }
    ready[x] = true;
    value[x] = mi;
    return mi;
}
