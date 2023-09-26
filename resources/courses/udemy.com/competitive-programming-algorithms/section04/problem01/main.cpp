#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> m;  
    for (size_t i{}; i < s.length(); i++) {
        m[s[i]] += 1; 
    }
    for (size_t i{}; i < s.length(); i++) {
        if (m[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    string s;
    cin >> s;
    cout << firstUniqChar(s);
}