#include <bits/stdc++.h>
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n = encoded.size() + 1;
        int total = 0;
        for (int i = 1; i <= n; i++) {
            total = total ^ i;
        }
        int sub_total = 0;
        for (int i = 0; i < n - 1; i+=2) {
            sub_total = sub_total ^ encoded[i];
        }
        vector<int> decoded(n);
        decoded[n - 1] = total ^ sub_total;

        for (int i = n - 2; i >= 0; i--) {
            decoded[i] = decoded[i + 1] ^ encoded[i];
        }

        return decoded;
    }
};

int main() {
    Solution sol {};
    vector<int> test = {6, 5, 4, 6};
    vector<int> test2 = {3, 1};
    println(sol.decode(test));
    println(sol.decode(test2));
}