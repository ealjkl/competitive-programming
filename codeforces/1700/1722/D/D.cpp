#include <bits/stdc++.h>
using namespace std;
#define int long long int
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n; cin >> n;
    string dir; cin >> dir;
    vector<int> vals(n);
    int tot = 0;
    for (int i = 0; i < n; i++) {
      if (dir[i] == 'R') {
        vals[i] = n - 1 - i;
      } else {
        vals[i] = i;
      }
      tot += vals[i]; 
    }
    priority_queue <int, vector<int>, greater<int> > ovals;
    for (auto el: vals) {
      ovals.push(el);
    }

    auto oldTot = tot;
    int k = 1;
    for (; k <= n; k++) {
      auto val = ovals.top();
      oldTot = tot;
      tot -= val;
      tot += (n - 1 - val);
      // cout << "tot, oldTot: " << tot << " " << oldTot << endl;
      if (tot <= oldTot) {
        break;
      }
      cout << tot << " ";
      ovals.pop();
    }
    for(; k <= n; k++) {
      cout << oldTot << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      solve();  
    }
}