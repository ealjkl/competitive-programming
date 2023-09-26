#include<bits/stdc++.h>
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

//(min, path)
pair<int, vector<int>> tsp(vector<vector<int>> &dist, int from, int initial, int mask) {
    int n = dist.size();

    //if the mask is full the algorithm is over 
    if (mask == ((1 << n) - 1)) {
        return {0, {}};
    }
    //If the mask is not full, checkout every possibility of the turned off 
    auto max_el = 0; 
    vector<int> max_path; 
    for (int to = 0; to < n; to++){
        //if the ith bit is turned off, then it is a candidate
        if ((mask & (1 << to)) == 0) {
            auto precand = tsp(dist, to, initial, (mask | (1 << to))); 
            int cand_max = precand.first + dist[from][to];
                // println("current max:", max_el,  "| precand:", precand.first, "| distance:", dist[from][to],"| candidate:", cand_max,"| mask:", bitset<4>(mask), "| from:",from, "| to:", to);
            if (cand_max > max_el) {
                max_el = cand_max;
                max_path = {to};
                max_path = concatVector(max_path, precand.second);
            }
        }
    }
    if (mask == (1 << initial)) {
        vector<int> temp = {initial};
        return {max_el, concatVector(temp, max_path)};
    }
    return {max_el, max_path};
}

string shortestSuperstring(vector<string> words) {
    auto dist = findAdjMatrix(words);
    vector<int> max_path;
    int max_tsp = 0;
    for (int i = 0; i < words.size(); i++) {
        auto cand = tsp(dist, i, i, (1 << i));
        auto cand_max = cand.first;
        if (cand_max > max_tsp) {
            max_tsp = cand_max;
            max_path = cand.second;
        }
    }
    string ans = words[max_path[0]];
    for (int i = 1; i < words.size(); i++) {
        string word = words[max_path[i]];
        int inter = dist[max_path[i - 1]][max_path[i]];
        ans += word.substr(inter , word.length() - inter);
    }
    // if (ans == "alecodalecalec") {
    //     ans = "";
    //     for (auto word: words) {
    //         ans+= word + "|";
    //     }
    // }
    return ans;
}

int main() {
    vector<vector<int>> dist = {
        {0, 700, 42, 25},
        {20, 0, 30, 34},
        {42, 600, 0, 10},
        {25, 35, 10, 0},
    };

    // auto tsp_ans = tsp(dist, 0, 0, 1); 
    // cout << "max: " << tsp_ans.first << endl;
    // println(tsp_ans.second);

    // vector<string> words = {"catg","ctaagt","gcta","ttca","atgcatc"};
    vector<string> words = {"alec","plays","cod","codingminutes"};
    // println(findAdjMatrix(words));
    auto ans = shortestSuperstring(words);
    cout << "ans: " << ans << endl;
}