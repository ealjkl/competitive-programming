#include <bits/stdc++.h>
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"
using namespace std;

int findDistance(string s1, string s2) {
    int n = min(s1.length(), s2.length());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string sub1 = s1.substr(s1.length() - i, i);
        string sub2 = s2.substr(0, i);
        if (sub1 == sub2) {
            ans = max(ans, i); 
        }
    }
    return ans;
}

vector<vector<int>> findAdjMatrix(vector<string> &words) {
    int n = words.size();
    vector<vector<int>> matrix( n , vector<int> (n, 0));;
    for (int i= 0; i < n; i++) {
        auto word1 = words[i];
        for (int j = 0; j < n; j++) {
            auto word2 = words[j];
            matrix[i][j] = findDistance(word1, word2);
        }
    }
    return matrix;
}

vector<int> concatVector(vector<int> &v1, vector<int> &v2) {
    vector<int> ans = v1;
    for (int i = 0; i < v2.size(); i++) {
        ans.push_back(v2[i]);
    }
    return ans;
}

pair<int, vector<int>> tsp(vector<vector<int>> &dist, int mask, int from, vector<vector<pair<int, vector<int>>>> &dp) {
    int n = dist.size();
    //If all is traversed, there is only the final city to go
    if (mask == ((1 << n) - 1)) {
        return {0, {from}};
    }
    if (dp[mask][from].first != -1) {
        return dp[mask][from];
    }

    int max_el = -1;
    vector<int> max_path = {};
    for (int to = 0; to < n; to++) {
        if ((mask & ( 1 << to)) == 0) {
            auto precand = tsp(dist, (mask | (1 << to)), to, dp);
            int max_cand = precand.first + dist[from][to];
            if (max_cand > max_el) {
                max_el = max_cand;
                max_path = {from};
                for (int i = 0; i < precand.second.size(); i++) {
                    max_path.push_back(precand.second[i]);
                }
            }
        }
    }
    dp[mask][from] = {max_el, max_path};
    return {max_el, max_path};
}

pair <int, vector<int>> tspFromInitial(vector<vector<int>> &dist, int initial, vector<vector<pair<int, vector<int>>>> &dp) {
    return tsp(dist, (1 << initial), initial, dp);
}

string shortestSuperstring(vector<string> &words) {
    int n = words.size();
    auto dist = findAdjMatrix(words);
    int max_tsp = -1;
    vector<int> max_path;
    for (int i = 0; i < n; i++) {
        vector<vector<pair<int, vector<int>>>> dp(1 << n, vector<pair<int, vector<int>>>(n, pair<int, vector<int>>(-1, vector<int>())));
        auto cand = tspFromInitial(dist, i, dp);
        auto max_cand = cand.first;
        if (max_cand > max_tsp) {
            max_tsp = max_cand;
            max_path = cand.second;
        }
    }

    string ans = words[max_path[0]];
    for (int i = 1; i < words.size(); i++) {
        string word = words[max_path[i]];
        int inter = dist[max_path[i - 1]][max_path[i]];
        ans += word.substr(inter , word.length() - inter);
    }
    return ans;
}


int main() {
    vector<string> words = {"nbsgonqmpreelpbr","hnysjajtiguehrokus","udgzbzmevnkzzba","axtbmcpbmoubyoscn","vqnbsgonqmpreel","xvqnbsgonqmpree","ajtiguehrokustktudgz","brgkgihuetpqrhhbhn","dgzbzmevnkzzbaxtbmcp","ehrokustktudgzbzmevn","uetpqrhhbhnysjaj","vnkzzbaxtbmcpbmo"}; 
    // int n = words.size();
    // auto dist = findAdjMatrix(words);
    // vector<vector<pair<int, vector<int>>>> dp(1 << n, vector<pair<int, vector<int>>>(n, pair<int, vector<int>>(-1, vector<int>())));
    // println(dist);
    cout << shortestSuperstring(words) << endl;
}