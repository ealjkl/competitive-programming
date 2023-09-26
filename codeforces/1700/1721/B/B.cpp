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

class Point {
public: 
    Point(int x, int y): x{x}, y{y} {}
    int x;
    int y;
};

int distance(Point p, Point q) {
    int x1 = p.x;
    int x2 = q.x;
    int y1 = p.y;
    int y2 = q.y;
    return abs(x1 - x2) + abs(y1 - y2);
}

int solve() {
    int n, m, sx, sy, d;
    cin >> n >> m >> sy >> sx >> d;
    //lasser close to the end
    if (abs(n - sx) + abs(m - sy) <= d) {
        return -1;
    }
    //right and bottom
    if ( (n - sy <= d) && ( m - sx <= d)) {
        return -1;
    }
    //left and top
    if ( (sx - 1 <= d) && (sy - 1 <= d) ) {
        return -1;
    }
    //left and right
    if ((sx - 1 <= d) && (m - sx <= d)) {
        return -1;
    }
    //top and bottom
    if ((sy - 1 <= d) && (n - sy <= d)) {
        return -1;
    }

    return n -2 + m;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        cout << solve() << endl;        
    }
}