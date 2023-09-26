#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    bitset<32> b(n);
    int max_sequence = 0;
    int count = 0;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == 1) {
            count++;
        } else {
            count = 0;
        }
        if (count > max_sequence) {
            max_sequence = count;
        }
    }
    return max_sequence;
}

int main() {
    int n = 156;
    cout<< solve(n) << endl;
}