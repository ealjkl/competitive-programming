#include <bits/stdc++.h>
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

using namespace std;

const int mod = 1e9 + 7;
const int sz = 2;

struct Mat {
    int m[sz][sz];
    Mat() {
        memset(m, 0, sizeof(m));
    }
    void identity() {
        for (int i = 0; i < sz; i++) {
            m[i][i] = 1;
        }
    }
    Mat operator*(Mat a) {
        Mat res;
        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz; j++) {
                for (int k = 0; k < sz; k++) {
                    res.m[i][j] += m[i][k]*a.m[k][j];
                    res.m[i][j] % mod;
                }
            }
        }
        return res;
    }
};

int Fib(int n) {
    Mat res;
    res.identity();
    Mat T;
    T.m[0][0] = T.m[0][1] = T.m[1][0] = 1;
    if (n <= 2) {
        return 1;
    }
    
    n -= 2;

    while (n) {
        if (n & 1) res = res * T;
        T = T * T;
        n /= 2;
    }
    return (res.m[0][0] + res.m[0][1]) % mod;
}

vector<vector<int>> matmul(vector<vector<int>> &a, vector<vector<int>> &b) {
    int R = a.size();
    int C = b[0].size();
    int K = a[0].size();

    vector<vector<int>> ans(R, vector<int>(C));

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            for (int k = 0; k < K; k++) {
                ans[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    return ans;
}

vector<vector<int>> matsum(vector<vector<int>> &a, vector<vector<int>> &b) {
    vector<vector<int>> ans(a.size(), vector<int>(a.size()));

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            ans[i][j] = a[i][j] + b[i][j];
        }
    }
    return ans;
}

vector<vector<int>> dou(vector<vector<int>> & a) {
    vector<vector<int>> ans(2, vector<int>(2));
    for (int i =0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            ans[i][j] = a[i][j] + a[i][j];
        }
    }
    return ans;
}

vector<vector<int>> powFibMatrix(int n) {
    vector<vector<int>> a = {
        {1, 1},
        {1, 0}
    };
    vector<vector<int>> res = {
        {1, 0},
        {0, 1}
    };
    while(n) {
        if (n & 1) res = matmul(a, res);
        a = matmul(a, a);
        n = (n >> 1);
    }
    return res;
}

int main() {
    println(powFibMatrix(10));
}