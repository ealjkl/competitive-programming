#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
//inverses[x] = x**(-1) % mod
unordered_map<int, int> inverses;

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

const int inverse_25 = find_inverse(25, mod);

int solve(int n){
    int counter = !(n & 1); // 0 if odd, 1 if even
    long long curr = 1;
    long long a = 0;
    for (int i = 0; i < n; i++) {
        a = (a + curr) % mod;
        if (counter == 1) {
            counter = 0;
            curr = (curr * 26) % mod;
        } else {
            counter++;
        }
    }
    int b = curr;

    return (a* find_inverse(b, mod)) %  mod;
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