#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int mul(int a, int n, int m) {
    int res = 0;
    while (n) {
        if (n & 1) {
            res = (res + a) % m;
        }
        a = (2*a) % m;
        n = (n >> 1);
    }
    return res;
}

int powr(int a, int n, int m) {
    int res = 1;
    while (n) {
        if (n  & 1) {
            res =  mul(res, a, m) % m;
        }
        a = mul(a, a, m) % m;
        n = (n >> 1);
    }
    return res;
}

int find_inverse(int a, int p) {
    return powr(a, p - 2, p);
}


int solve(int n){
    int counter = !(n & 1); // 0 if odd, 1 if even
    int curr = 1;
    int a = 0;
    for (int i = 0; i < n; i++) {
        a = (a + curr) % mod;
        if (counter == 1) {
            counter = 0;
            curr = mul(curr, 26, mod);
        } else {
            counter++;
        }
    }
    int b = curr;
    return mul(a, find_inverse(b, mod), mod);
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}