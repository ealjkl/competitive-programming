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

int solve(int n, vector<int> nums){
    vector<int> cumsum(n);
    cumsum[0] = modulo(nums[0], n);
    vector<int> counter(n); 
    for (int i = 1; i < n; i++) {
        cumsum[i] = modulo(cumsum[i - 1] + nums[i], n);
    }
    for (int i = 0; i < n; i++) {
        counter[cumsum[i]]++;
    }
    int ans = counter[0];
    for (int i = 0; i < n; i++) {
        ans += (counter[i]*(counter[i] - 1))/2;
    }
    return ans;
}

int main() {
    vector<int> nums = {4, 5, 0, 4, 2};
    int x = solve(nums.size(), nums);
    cout << "ans: " << x << endl;
}