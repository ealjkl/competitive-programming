#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i <= b; i++)

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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    auto x = expand(3, 3);
    auto y = expand(36, 3);
    cout << "expanded assignment" << endl;
    printVector(x);
    printVector(y);
    x.insert(x.end(), y.begin(), y.end());
    printVector(x);
    vector<int> vec = {1, 16};

    auto z = expand(vec, 2);
    printVector(z);
}