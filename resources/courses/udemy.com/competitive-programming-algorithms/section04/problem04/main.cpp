#include<bits/stdc++.h>
using namespace std;

int maximumScore(int a, int b, int c) {
    array<int, 3> x = {a, b, c};
    cout << endl;

    int ans {0};
    sort(x.begin(), x.end());
    while (x[0] > 0 || x[1] > 0) {
        x[1] -= 1; 
        x[2] -= 1;
        // cout << "x[1]" << x[1] <<  endl;
        ans++;
        sort(x.begin(), x.end());
    }
    
    return ans;
}

int main() {
    cout << maximumScore(2, 6, 4) << endl;
    cout << maximumScore(756, 6, 4) << endl;
}

