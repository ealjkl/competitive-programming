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

void solve(int t)
{
    int n;
    cin >> n;
    vi a(n);
    int zeroCount = 0;
    vi nonZeros;
    REP(i, 0, n)
    {
        cin >> a[i];
        if (a[i] != 0)
        {
            nonZeros.push_back(a[i]);
        }
        else
        {
            zeroCount++;
        }
    }
    int nonZeroCount = nonZeros.size();

    vi b = nonZeros;
    // if (t == 186)
    // {
    //     string ans = "";
    //     for (auto el : a)
    //     {
    //         ans += to_string(el) + "|";
    //     }
    //     cout << ans << endl;
    //     return;
    // }

    if (zeroCount > 0)
    {
        b.push_back(0);
    }
    while (b.size() < 3)
    {
        b.push_back(0);
    }

    // if there is a zero it can only be of lenth 3
    if (zeroCount > 0)
    {
        if (b.size() > 3)
        {
            cout << "NO" << endl;
            return;
        }
        if (count(b.begin(), b.end(), b[0] + b[1] + b[2]) == 0)
        {
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        return;
    }
    // when zeroCount == 0:

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
        if (count(a.begin(), a.end(), a[0] + a[1] + a[3]) == 0)
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
    if (n == 3 && count(a.begin(), a.end(), a[0] + a[1] + a[2]) == 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        solve(t);
    }
}