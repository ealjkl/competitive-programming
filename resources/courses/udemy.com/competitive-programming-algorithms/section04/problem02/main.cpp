#include<bits/stdc++.h>
using namespace std;
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

int findKthLargest(vector<int> nums, int k) {
    sort(nums.begin(), nums.end(), [] (int x, int y) -> bool {
        return x > y; 
    });    
    return nums[k - 1];
}

int main() {
    vector<int> a = {3,2,3,1,2,4,5,5,6}; 
    int num = findKthLargest(a, 4);
    cout << num;
}
