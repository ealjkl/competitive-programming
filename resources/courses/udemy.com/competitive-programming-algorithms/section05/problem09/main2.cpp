#include<bits/stdc++.h>
using namespace std;

bool isPowerOFTwo(int n) {
    return (n & (n - 1)) == 0;
}

constexpr long long getMask() {
    auto x = 1LL;
    for (int i = 0; i < 32/2; i++) {
        x = x | (x << 2);
    }
    const long long y = x;
    return y;
}

bool isPowerOfFour(int n) {
    constexpr long long mask = getMask();
    return isPowerOFTwo(n) && ((mask & n) == n);
}

int main() {
    bitset<32> x(0);
    cout << boolalpha << isPowerOfFour(16) << endl;
}
