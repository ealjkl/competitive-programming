#include <bits/stdc++.h>
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"
using namespace std;


int countBits(int n) {
    int count = 0;
    while(n > 0) {
        n = (n & (n - 1));
        count++;
    }
    return count;
}

vector<int> sortByBits(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b){
        int bits_a = countBits(a);
        int bits_b = countBits(b);
        if (bits_a != bits_b) {
            return bits_a < bits_b;
        } else {
            return a < b;
        }
    });
    return arr;
}

int main() {
    println(sortByBits({0, 1, 2, 3, 4, 5, 6, 7, 8}));
}