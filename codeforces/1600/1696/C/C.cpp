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
    return expanded;
}

vector<int> expand(vector<int> a, int m)
{
    vector<int> result;
    for (auto num : a)
    {
        vector<int> x = expand(num, m);
        result.insert(result.end(), x.begin(), x.end());
    }
    return result;
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

    auto a_ex = expand(a, m);
    auto b_ex = expand(b, m);

    if (a_ex == b_ex)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
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