#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int counter = 0;
    while (n > 0) {
        n = n & (n - 1);
    }
    return counter;
}

int totalHammingDistance(vector<int> nums) {
    int n = nums.size();
    int ans = 0;
    vector<int> bitsPerPos(32);
    for (auto num: nums) {
        for (int i = 0; i < 32; i++) {
            bitsPerPos[i] += ((num >> i) & 1);
        }
    }
    for (auto k: bitsPerPos) {
        ans += k*(n - k);
    }
    return ans;
}

int main() {
    cout << totalHammingDistance({4, 14, 2}) << endl;
}