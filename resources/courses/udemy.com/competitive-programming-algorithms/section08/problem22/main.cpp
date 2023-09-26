#include<bits/stdc++.h>
using namespace std;

long long mulmod(long long a, long long b, int c) {
    int res = 0;
    a = a%c;
    while (b) {
        if (b& 1) res =  (res + a) % c;
        a = (a + a) % c;
        b = (b >> 1); 
    }
    return res;
}
long long powr(long long a, long long b, int c) {
    int res = 1;
    while (b) {
        if (b&1) res = (res*a) % c; 
        a =  mulmod(a, a, c);
        b = (b >> 1);
    }
    return res;
}

int solve(long long A, long long N){
    int ans = powr(A, N, 9);
    if (ans == 0) {
        return 9;
    }
    return ans;
}

int main() {
    cout << solve(7, 2) << endl;
    cout << solve(100, 2) << endl;
    cout << solve(30, 5) << endl;
    cout << solve(7, 3) << endl;
}