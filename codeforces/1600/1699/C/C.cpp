#include <bits/stdc++.h>
// #include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    REP(i, 0, n)
    cin >> a[i];

    vi b(0);

    int zeroCount = count(a.begin(), a.end(), 0);
    int nonZeroCount = n - zeroCount;

    map<int, int> counter;

    if (zeroCount > 0)
    {
        if (nonZeroCount > 4)
        {
            cout << "NO" << endl;
            return;
        }
        for (auto el : a)
        {
            counter[el] += 1;
        }

        for (auto &[key, val] : counter)
        {
            if (key != 0)
            {
                if (val != counter[-key])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        cout << "YES" << endl;
    }
    else
    {
        if (n > 4)
        {
            cout << "NO" << endl;
            return;
        }
        if (n == 4)
        {
            if (count(a.begin(), a.end(), a[0] + a[1] + a[2]) == 0)
            {
                cout << "NO" << endl;
                return;
            }
            if (count(a.begin(), a.end(), a[0] + a[2] + a[3]) == 0)
            {
                cout << "NO" << endl;
                return;
            }
            if (count(a.begin(), a.end(), a[1] + a[2] + a[3]) == 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
        if (n == 3 && !count(a.begin(), a.end(), a[0] + a[1] + a[2]) > 0)
        {
            cout << "NO" << endl;
        }
        cout << "YES" << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}