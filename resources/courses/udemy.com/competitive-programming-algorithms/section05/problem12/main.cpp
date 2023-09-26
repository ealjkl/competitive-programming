#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    int max_seq = 0;
    int count = 0;
    for (int i = 0; i < 31; i++) {
        if (n&1) {
            count++;
        } else {
            count = 0;
        }
        if (count > max_seq) {
            max_seq = count;
        }
        n = (n >> 1);
    }
    return max_seq;
}

int main() {
    int n = 156;
    cout<< solve(n) << endl;
}