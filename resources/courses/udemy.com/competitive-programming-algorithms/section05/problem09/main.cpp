#include<bits/stdc++.h>
using namespace std;

bool isPowerOFTwo(int n) {
    return (n & (n - 1)) == 0;
}

bool isPowerOfFour(int n) {
    if (isPowerOFTwo(n)) {
        double newN = sqrt(n); 
        if (newN != static_cast<int>(newN)) return false;
        return isPowerOFTwo(newN);
    }
    return false;
}

int main() {
    int n = 15;
    cout << boolalpha << isPowerOfFour(n) << endl;
    cout << bitset<32>(1431655765) << endl;
}