#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define int long long
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)

void printVector(vector<int> v, int safe = 100)
{
    if (v.size() > safe)
    {
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

pair<int, int> expand(int num, int m)
{
    int p = 1;
    int safe = 10;
    while (num % m == 0)
    {
        p *= m;
        num /= m;
    }
    // int times = pow(m, count);
    return {num, p};
}

void solve()
{
    int n, m, k;
    cin >> n >> m;
    vector<int> a(n);

    REP(i, 0, n)
    {
        cin >> a[i];
    }

    cin >> k;
    vector<int> b(k);
    REP(j, 0, k)
    {
        cin >> b[j];
    }

    // define pointers
    int i = 0, j = 0;
    int safe = 100;
    bool aLeft = false;
    bool bLeft = false;
    vector<int> a_ex;
    vector<int> b_ex;
    int a_num, b_num, a_times, b_times;
    while (i < n && j < k)
    {
        if (!aLeft)
        {
            auto temp = expand(a[i], m);
            a_num = temp.first, a_times = temp.second;
        }
        if (!bLeft)
        {
            auto temp = expand(b[j], m);
            b_num = temp.first, b_times = temp.second;
        }
        if (a_num != b_num)
        {
            cout << "NO" << endl;
            return;
        }
        if (a_times == b_times)
        {
            bLeft = false;
            aLeft = false;
            i++;
            j++;
            continue;
        }
        else if (a_times > b_times)
        {
            a_times -= b_times;
            aLeft = true;
            bLeft = false;
            j++;
        }
        else
        {
            b_times -= a_times;
            bLeft = true;
            aLeft = false;
            i++;
        }
    }
    cout << "YES" << endl;
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