#include<bits/stdc++.h>
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

using namespace std;

int globalX;
class Compare {
public:
    bool operator() (int a, int b) {
        return abs(a - globalX) > abs(b - globalX);
    }

};

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    auto &y = globalX;
    y = x;
    vector<int> ans(k);  
    priority_queue<int, vector<int>, Compare> q;

    for (auto el: arr) {
        q.push(el);
    }

    for (size_t i{0}; i < k; i++) {
        int top = q.top();
        ans[i] = top; 
        q.pop();
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    println(findClosestElements({1, 2, 3, 4, 5}, 4, 3));    
}