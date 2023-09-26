#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

int modulo(int a, int M) {
    int ans = a % M;
    if (ans < 0) {
        return M - ans;
    } else {
        return ans;
    }
}

int mulmod(int a, int b, int M) {
  int q = M / a;
  int r = modulo(M, a);
  int first = modulo(a * modulo(b, q), M);
  int second = modulo((b / q) * r, M);
  int ans = modulo(first - second, M);
  return ans;
}

int powr(int a, int b) {
    int res = 1;
    while (b) {
        if (b&1) res = mulmod(res, a, mod);
        a = mulmod(a, a, mod);
        b = b >> 1;
    }
    return res;
}

int main() {
    cout << powr(5, 3) << endl;
}