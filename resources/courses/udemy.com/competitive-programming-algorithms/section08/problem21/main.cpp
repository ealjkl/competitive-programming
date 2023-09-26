#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

int mulmod(int a, int b, int mod) {
    int res = 0; // Initialize result
 
    // Update a if it is more than
    // or equal to mod
    a %= mod;
 
    while (b) {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % mod;
 
        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % mod;
 
        b >>= 1; // b = b / 2
    }
 
    return res;
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

int locker(int n) {
    if (n < 4) {
        return n;
    } else {
        int q = n/3;
        int r = n % 3;
        if (r == 0) {
            return powr(3, q);
        } else if (r == 1) {
            return mulmod(powr(3, q - 1), 4, mod);
        } else {
            return mulmod(powr(3, q), 2, mod);
        }
    }
}

int main() {
    cout << locker(532) << endl; 
    cout << mulmod(294967268, 294967268, mod) << endl;
}