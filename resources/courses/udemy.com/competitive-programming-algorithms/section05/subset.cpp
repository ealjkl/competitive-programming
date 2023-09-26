#include <bits/stdc++.h>
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"
using namespace std;

vector<string> findSubsets(vector<char> options) {
    vector<string> ans;
    for (int mask = 0; mask < (1 << options.size()); mask++) {
        string perm = "";
        for (int j = 0; j < options.size(); j++) {
            if ( (1 << j)&mask ) {
                perm += options[j];
            }
        }
        ans.push_back(perm);
    }
    return ans;
}

int main() {
    println(findSubsets({'a', 'b', 'c', 'z'}));
}