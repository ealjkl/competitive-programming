#include <bits/stdc++.h>

using namespace std;

const int sz = 3;
const int mod = 1e9 + 7;

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

struct Mat {
    long long m[sz][sz];
    Mat() {
        memset(m, 0, sizeof(m));
    }
    void identity() {
        for (int i = 0; i < sz; i++) {
            m[i][i] = 1;
        }
    }
    Mat operator*(Mat a) {
        Mat res;
        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz; j++) {
                for (int k = 0; k < sz; k++) {
                    res.m[i][j] += m[i][k] * a.m[k][j];
                    res.m[i][j] % mod;
                }
            }
        }
        return res;
    }
};

long long Fibosum(int n) {
    Mat res;
    res.identity();
    Mat T;
    T.m[0][0] = T.m[0][1] = T.m[0][2] = 1;
    T.m[1][1] = T.m[1][2] = 1;
    T.m[2][1] = 1;

    if (n == -1) {
        return 0;
    }
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    n -= 1;

    while (n) {
        if (n & 1) res = res * T;
        T = T * T;
        n /= 2;
    }
    return (res.m[0][0] + res.m[0][1]) % mod;
}

int fibSum(int n,int m){
    long long low = Fibosum(n - 1);
    long long high = Fibosum(m);
    return (high - low + mod) % mod;
}

int main() {
    int x = 30;
    // cout << "Fibsum 4: " << Fibosum(x - 1) << endl;
    // cout << "Fibsum 4: " << Fibosum(x) << endl;
    cout << "Fibsum 154: " << Fibosum(154) << endl;
    // cout << "Fibsum 6: " << Fibosum(6) << endl;
    // cout << "Fibsum 10 , 19: " << fibSum(10, 19) << endl;
    // cout << "Fibsum 154 , 1390: " << fibSum(154, 1390) << endl;
}
