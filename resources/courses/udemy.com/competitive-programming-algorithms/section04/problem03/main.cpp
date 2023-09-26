#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto num: nums) {
        pq.push(num);
    }
    int total {0};
    while(pq.size() > 1) {
        int n1 {pq.top()}; 
        pq.pop();
        int n2 {pq.top()}; 
        pq.pop();
        int sum {n1 + n2};
        pq.push(sum);
    total += sum;
    }

    return total;
}

int main() {
    solve({1, 2, 3, 4, 5});
}