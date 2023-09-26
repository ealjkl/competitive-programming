#include<bits/stdc++.h>
using namespace std;

int countTriplets(vector<int> nums) {
    map<int, int> mp;
    for (auto a: nums) {
        for (auto b: nums) {
            mp[a & b]++;
        }
    }
    int counter = 0;
    for (auto &[key, val]: mp) {
        for (auto num: nums) {
            if ((key & num) == 0) {
                counter += val;
            }
        }
    }
    return counter;
}

int main() {
    cout << countTriplets({2, 1, 3}) << endl;
}