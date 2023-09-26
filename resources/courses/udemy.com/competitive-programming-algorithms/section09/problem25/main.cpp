#include <bits/stdc++.h>
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

using namespace std;

int modulo(int a,int m) {
    int res = a % m;
    if (res < 0) {
        return res + m;
    }
    return res;
}

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> cumsum(n);
        cumsum[0] = modulo(nums[0], k);
        vector<int> counter(k); 
        for (int i = 1; i < n; i++) {
            cumsum[i] = modulo(cumsum[i - 1] + nums[i], k);
        }
        for (int i = 0; i < n; i++) {
            counter[cumsum[i]]++;
        }
        int ans = counter[0];
        for (int i = 0; i < k; i++) {
            ans += (counter[i]*(counter[i] - 1))/2;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // vector<int> nums = {4, 5, 0, -2, -3, 1};
    // int x = sol.subarraysDivByK(nums, 5);
    vector<int> nums = {-2};
    int x = sol.subarraysDivByK(nums, 6);
    cout << "ans: " << x << endl;
}