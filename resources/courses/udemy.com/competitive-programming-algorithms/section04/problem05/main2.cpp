#include<bits/stdc++.h>
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    vector<int> ans;  
    ans.reserve(k);
    auto lo = lower_bound(arr.begin(), arr.end(), x) - arr.begin() + 1;
    auto hi = lo + 1;
    int i = lo, j = hi;
    while (ans.size() < k) {
        if (i >= 0 && (arr[i] - x) < (arr[j] - x) ) {
            ans.push_back(arr[i--]);
        } else {
            ans.push_back(arr[j++]);
        }
    }
    return ans;
}

int main() {
    println(findClosestElements({1, 2, 3, 4, 5}, 4, 3));    
}