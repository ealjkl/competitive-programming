#include <bits/stdc++.h>

using namespace std;

int modulo(int a, int n) {
    int ans = a % n;
    if (ans < 0) {
        return a + n;
    }
    return ans;
}

int solve(int n,int m, vector<int> &a){
    if (n > m) {
        return 0;
    }
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = modulo(ans*modulo(abs(a[i] - a[j]), m), m);
        }
    }
    return ans;
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << solve(n, m, a) << endl;
}