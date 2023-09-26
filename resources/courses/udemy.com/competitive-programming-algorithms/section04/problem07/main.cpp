#include<bits/stdc++.h>
using namespace std;
#include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"

string getHint(string secret, string guess) {
    unordered_map<char, int> counter;  
    int bulls {0};
    int cows {0};

    for (size_t i{0}; i < secret.length(); i++) {
        if (secret[i] == guess[i]) {
            bulls += 1;
        } else {
            counter[secret[i]] += 1;
        }
    }

    for (size_t i {}; i < guess.length(); i++) {
        // println("counter", i, secret[i], guess[i], counter[guess[i]]);
        if (secret[i] == guess[i]) {
            continue;
        }
        if (counter[guess[i]] > 0) {
            cows++;
            counter[guess[i]] -= 1; 
        }
    }

    stringstream ss;
    ss << bulls << "A" << cows << "B";
    
    return ss.str();
}

int main() {
    cout << getHint("1123", "0111") << endl;
}