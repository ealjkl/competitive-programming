#include <bits/stdc++.h>
using namespace std;

void clearBitsInRange(int &n, int i, int j) {
    auto mask1 = (~0 << (j+ 1));
    auto mask2 = (1 << i) - 1;
    auto mask = mask1 | mask2;
    n = n & mask;
}

int main() {
    int n {0b10'000'000'000};
    int m {0b10'101};
    int i = 2, j = 6;
    clearBitsInRange(n, i, j);
    int out = (m << i) | n;
    cout << bitset<16>(n) << endl;
    cout << bitset<16>(m) << endl;
    cout << bitset<16>(out) << endl;
}
