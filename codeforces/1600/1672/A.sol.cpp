#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ii pair<ll, ll>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
int n;
int arr[105];

signed main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        rep(x, 0, n) cin >> arr[x];

        int tot = 0;
        rep(x, 0, n) tot+= arr[x] - 1;

        if (tot%2 == 0) cout << "maomao90" << endl;
        else cout << "errorgorn" << endl;
    }
}