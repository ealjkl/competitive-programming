#include<bits/stdc++.h>
using namespace std;
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

bool mycompare(int a, int b) {
    return a > b;
}

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    vector<int> ans;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int diff = abs(arr[i] - x);
        q.push({diff, arr[i]});
    }
    while(k--) {
        ans.push_back(q.top().second);
        q.pop();
    }
    sort(ans.begin(), ans.end(), [](int a, int b){
        return a > b;
    });
    return ans;
}

int main() {
    println(findClosestElements({1, 2, 3, 4, 5}, 4, 3));    
}
