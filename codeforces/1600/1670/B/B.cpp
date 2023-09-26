#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve () {
    int n; cin >> n;
    string  s;
    cin >> s;
    int k; cin >> k;
    vector<char> cc(k);
    for (int i = 0; i < k; i++) {
        cin >> cc[i];
    }

    int num = 0; 

    string s2 = s; 
    while (s2.length() > 0) {
        string temp = "";
        for (int i = 0; i < s2.length() - 1; i++) {
            int cnt = count(cc.begin(), cc.end(), s2[i + 1]);
            if (!cnt) {
                temp += s2[i];  
            }
        }
        temp += s2[s2.length() - 1];
        if (temp == s2) break;
        s2 = temp;
        num += 1;
    }
    cout << num << endl;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        solve();        
    }
}