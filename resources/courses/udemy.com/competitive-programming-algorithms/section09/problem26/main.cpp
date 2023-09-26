#include<bits/stdc++.h>
using namespace std;

int modulo(int a, int n) {
    int ans = a % n;
    if (ans < 0) {
        return a + n;
    }
    return ans;
}

int solve(int n,int m, vector<int> a){
    if (n > m) {
        return 0;
    }
    int ans = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans *= abs(modulo(a[i] - a[j], m));
        }
    }
    return ans;
}

int main() {
    cout << solve(2, 10, {8, 5}) << endl;
    cout << solve(4, 427, {8, 5}) << endl;

}