#include <bits/stdc++.h>

using namespace std;

int mul(int a, int b) {
    int res = 0;
    while (b) {
        if (b & 1) res += a;
        a *= 2;

        b = (b >> 1);
    }
    return res;
}

int mulmod(int a, int b, int c) {
    int res = 0;
    a = a % c;
    while (b) {
        if (b & 1) res = (res + a) % c;
        a = (2*a) % c;
        b = (b >> 1);
    }
    return res;
}

int main() {
    cout << mul(5, 7) << endl;
}