#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
//inverses[x] = x**(-1) % mod
unordered_map<int, int> inverses;
unordered_map<int, int> powers;

long long powr(long long a, long long n, int m) {
    long long res = 1;
    while (n) {
        if (n  & 1) {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        n = (n >> 1);
    }
    return res;
}

int find_inverse(int a, int p) {
    if (inverses[a] != 0) {
        return inverses[a]; 
    } else {
        inverses[a] = powr(a, p - 2, p);
        return inverses[a];
    }
}

const int INVERSE_25 = find_inverse(25, mod);

int solve(int n){
    long long po = powr(26, n/2, mod);
    long long ans = po * 26; ans = ans % mod; 
    ans = ans - 1, ans = ans % mod;
    ans = ans*INVERSE_25, ans = ans % mod;
    ans = ans*2, ans = ans % mod;
    ans = ans - po % mod;
    if (!(n & 1)) {
        ans = (ans - 1) % mod;
    }
    ans = (ans* find_inverse(po, mod)) %  mod;
    if (ans < 0) {
        ans = ans + mod;
    }

    return ans;
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