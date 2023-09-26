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

vi subset;
vi permutation;

void search(int k, int n, bool *chosen)
{
    cout << "searching: " << endl;
    cout << "k, n: " << k << ", " << n << endl;
    if (k == n)
    {
        cout << "SUBSET: \n";
        for (auto el : subset)
        {
            cout << el << " ";
        }
        cout << "\n";
    }
    else
    {
        search(k + 1, n, chosen);
        subset.push_back(k);
        search(k + 1, n, chosen);
        subset.pop_back();
    }
}

// void search()
// {
//     if (permutation.size() == n)
//     {
//         for (auto el : permutation)
//         {
//             cout << el << " ";
//         }
//         cout << endl;
//     }
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (chosen[i])
//                 continue;
//             chosen[i] = true;
//             permutation.push_back(i);
//             search();
//             chosen[i] = false;
//             permutation.pop_back();
//         }
//     }
// }

signed main()
{
    int n = 3;
    bool chosen[n];
    search(0, n, chosen);
}