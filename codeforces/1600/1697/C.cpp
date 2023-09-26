#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl

void solve()
{
    int n;
    string s, t;
    cin >> n >> s >> t;
    int i = 0, j = 0;
    int safe = 10;
    while (i < n && j < n - 1 && safe--)
    {
        // cout << "initial i, j: " << i << "," << j << endl;
        // cout << "s, t: " << s << " " << t << endl;
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'c'))
            {
                int temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                if (s[i] == t[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if (s[n - 1] != t[n - 1])
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}