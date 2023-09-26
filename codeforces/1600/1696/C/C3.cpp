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

vector<int> expand(int num, int m)
{
    int count = 0;
    int safe = 10;
    while (num % m == 0)
    {
        count++;
        num /= m;
    }
    int times = pow(m, count);
    vector<int> expanded(times);
    for (int i = 0; i < times; i++)
    {
        expanded[i] = num;
    }
    // cout << "expanded before assignment" << endl;
    // printVector(expanded);
    return expanded;
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

    while (i < n && j < k)
    {
        if (!aLeft)
        {
            a_ex = expand(a[i], m);
        }
        if (!bLeft)
        {
            b_ex = expand(b[j], m);
        }
        if (a_ex[0] != b_ex[0])
        {
            cout << "NO" << endl;
            return;
        }
        int a_size = a_ex.size();
        int b_size = b_ex.size();
        if (a_size == b_size)
        {
            i++;
            j++;
            continue;
        }
        else if (a_size > b_size)
        {
            a_ex = vector<int>{a_ex.begin(), a_ex.begin() + (a_size - b_size)};
            aLeft = true;
            j++;
        }
        else
        {
            b_ex = vector<int>{b_ex.begin(), b_ex.begin() + (b_size - a_size)};
            bLeft = true;
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