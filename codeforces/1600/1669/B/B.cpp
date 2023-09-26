#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

int counter =  0;
bool remove_ab(vector<char>& v) {
    
    if (v.empty()) return false;
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] == 'A' && v[i + 1] == 'B') {
            v.erase(v.begin() + i + 1);
            v.erase(v.begin() + i);
            return true;
        }
    }
    return false;
}

signed main() {
    int t;
    int na, nb;
    cin >> t;
    string s2;
    while (t--) {
        cin >> s2;
        if (s2.size() < 2 ) {
            cout << "NO" << endl;
            continue;
        };
        if (s2[s2.size() - 1] != 'B') {
            cout << "NO" << endl;
            continue;
        }
        vector<char> v;
        for (auto c: s2) v.push_back(c);
        while (remove_ab(v)) {}
        if (count(v.begin(), v.end(), 'B') > 0) {
            cout << "NO" << endl;
            continue;
        } else {
            cout << "YES" << endl;
            continue;
        }
    }
}
