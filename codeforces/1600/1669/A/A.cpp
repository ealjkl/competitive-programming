#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int rating; cin >> rating; 
        string div = "1";
        if ((rating <= 1899) && (rating >= 1600) ) div = "2";  
        else if ((rating <= 1599) && (rating >= 1400) ) div = "3";  
        else if (rating <= 1399) div = "4";  
        cout << "Division " << div << endl;
    }
}