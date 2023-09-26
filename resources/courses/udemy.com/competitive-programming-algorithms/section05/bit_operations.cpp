#include <bits/stdc++.h>
using namespace std;

int getIthBit(int n, int i) {
    // auto mask = (1 << i);
    return (n >> i) & 1;
}

void setIthBit(int &n, int i) {
    auto mask = (1 << i);
    n = n | mask;
}

void clearIthBit(int &n, int i) {
    auto mask = ~(1 << i);
    n = n & mask;
}

void updateIthBit(int &n, int i, int v) {
    clearIthBit(n, i);
    int mask = (v << i);
    n = n|mask;
}

void clearLastIBits(int &n, int i) {
    auto mask = (~0 << i);
    n = n & mask;
}

void clearBitsnRange(int &n, int i, int j) {
    auto mask1 = (~0 << (j + 1));
    auto mask2 = (1 << i) - 1;
    auto mask = mask1 | mask2; 
    n = n & mask;
}

int count_set_bits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n = (n >> 1);
    }
    return count;
}

int count_set_bits_fast(int n) {
    int count = 0;
    while (n > 0) {
        n = (n & (n - 1));
        count++;
    }
    return count;
}

int main() {
    int n = 31;
    int i = 1;
    int j = 3;

    cout << bitset<16>(n) << endl; 
    clearBitsnRange(n, i, j);

    cout << bitset<16>(n) << endl;

    return 0;
}