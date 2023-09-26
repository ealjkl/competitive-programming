#include<bits/stdc++.h>
using namespace std;

void clearIBits() {

}

int rangeBitwiseAnd(int left, int right) {
    if (left == right) return left;

    bool firstMatch = false;
    for (int i = 31; i >= 0; i--) {
        auto left_shifted = (left >> i);
        auto right_shifted = (right >> i);
        cout << "i: " << i << endl;
        cout << "left sifhted  : " << bitset<50>(left_shifted) << endl;
        cout << "right shifted : " << bitset<50>(right_shifted) << endl;
        if (((left >> i) & 1) != ((right >> i) &1) ) {
            return (1 << (i + 1));
        } else {

        }
    }    
    return -1;
}

int main() {
    cout << rangeBitwiseAnd(1, 2147483647) << endl; }