#include<bits/stdc++.h>
using namespace std;
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

int countBits(int n) {
    int count = 0;
    while (n > 0) {
        n = (n & (n -1));
        count++;
    }
    return count;
}

int hammingDistance(int x, int y) {
    return  countBits(x^y);
}

int main() {
    int x = 1, y = 4;
    cout << hammingDistance(x, y) << endl;
}