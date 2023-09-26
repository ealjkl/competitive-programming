#include <bits/stdc++.h>

using namespace std;

bool solve() {
    int n; cin >> n;
    vector<ulong> a(n);
    for (int i = 0; i < n; i++) cin >> a[i]; 
    if (n > 128) {
        return true;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = k + 1; l < n; l++) {
                    auto xored = a[i]^a[j]^a[k]^a[l]; 
                    if ( xored == 0) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    if (solve()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}