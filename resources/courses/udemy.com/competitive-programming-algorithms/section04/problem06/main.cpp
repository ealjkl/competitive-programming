#include<bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int> candies) {
    unordered_set<int> s;
    for (auto candy: candies) {
        s.insert(candy);
    }

    return min(s.size(), candies.size()/2);
}

int main() {
    cout << distributeCandies({1, 1, 2, 2, 3, 3, 4}) << endl;
}