#include <bits/stdc++.h>
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"
using namespace std;

pair<int, int> findUniqueNumbers(vector<int> arr) {
    int xored = 0;
    for (auto el: arr) {
        xored = xored ^ el;
    }
    int pos = 0;
    for (int i = 0; i < sizeof(xored)*8; i++) {
        if ((xored >> i)&1) {
            pos = i;
            break;
        }
    }
    int first = 0;
    for (auto el: arr) {
        if ((el >> pos) & 1) {
            first = first ^ el;
        }
    }
    int second = first ^ xored;
    return {first, second};
}

int main() {
    auto p = findUniqueNumbers({3, 2, 5, 1, 7, 2, 6, 3, 1, 6, 8, 8 });
    auto first = p.first;
    auto second = p.second;
    println(first, second);
}