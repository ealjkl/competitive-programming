#include<bits/stdc++.h>
using namespace std;
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

vector<int> decode(vector<int> encoded, int first) {
    vector<int> arr(encoded.size() + 1);
    arr[0] = first;
    for (int i = 1; i < arr.size(); i++) {
        arr[i] = arr[i - 1] ^ encoded[i - 1];
    }
    return arr;
}

int main() {
    println(decode({1, 2, 3}, 1));
}