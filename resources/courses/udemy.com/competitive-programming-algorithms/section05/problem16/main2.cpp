#include<bits/stdc++.h>
using namespace std;

int rangeBitwiseAnd(int left, int right) {
    cout << bitset<16>(left) << endl;
    cout << bitset<16>(right) << endl;

    if (right == 0) return 0;
    if (left == right) return left;
    //finding the lastBit
    int lastBit = 0; 
    for (int i = 31; i >= 0; i--) {
        if ((right >> i) == 1) {
            lastBit = i;
            break;
        }
    }

    if (((left >> lastBit)&1) == 0) {
        return 0;
    }

    for (int i = lastBit; i>=0; i--) {
        cout << "i: " <<  i << endl;
        auto left_shifted = left >> i; 
        auto right_shifted = right >> i;
        if ((left_shifted & 1) != (right_shifted & 1)) {
            auto mask = ~((2 << i) - 1);
            // cout << bitset<16>(right) << endl;
            // cout << bitset<16>(mask) << endl;
            return (right & mask);
        }
    }
    return -1;
}

int main() {
    // cout << rangeBitwiseAnd(4, 5) << endl;
    // cout << rangeBitwiseAnd(2, 4) << endl;
    cout << rangeBitwiseAnd(10, 11) << endl;
}