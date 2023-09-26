#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define endl '\n'
#define debug(x) cout << #x << ": " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)
// #include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"


const string YES = "YES";
const string NO = "NO";

template<typename T>
void fill_arr(vector<T> &a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

template<typename T>
vector<T> read_arr(int n) {
    vector<T> out(n);
    for (int i = 0; i < n; i++) {
        cin >> out[i];
    }
    return out;
}

int mod(int a, int n) {
    int res = a % n;
    if (res < 0) res = res + n;
    return res;
}

string solve() {
    int n; cin >> n;
    auto a = read_arr<int>(n);
    unordered_map<int, int> counter;
    for (auto &x: a) {
        counter[(x % 10)] += 1;
    }
    // for (auto &[mod, count]: counter) {
    //     // println(mod, count);
    // }
    // println(a);
    for (auto &[mod1, count1]: counter) {
        //TODO: for some reason if I use the same counter in the nested loop, when I create available, it changes its contents.
        for (auto [mod2, count2]: counter) {
            int needed = mod(-(mod1 + mod2) + 3, 10);
            auto available = counter[needed];
            // println(mod1, mod2, needed);
            if (mod1 == mod2) {
                count2--;
            }
            if (mod1 == needed) {
                available--;
            }
            if (mod2 == needed) {
                available--;
            }
            // println("counts", count1, count2, available);
            if (count2 > 0 && available > 0) {
                return YES;
            }
        } 
    }
    return NO;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}



