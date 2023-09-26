#include <bits/stdc++.h>
// #include "/home/ealjkl/competitive-programming/utils/cpp/print.cpp"
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	map<int, pair<int, int>> counter;
	vector<int> cumsum(n);
	cumsum[0] = a[0] % n;
	int start_idx, end_idx;
	for (int i = 1; i < n; i++) {
		cumsum[i] = (cumsum[i - 1] + a[i]) % n;

	}

	for (int i = 0; i < n; i++) {
		if (cumsum[i] == 0) {
			cout << i + 1 << endl;
			for (int j =1 ; j <= i + 1; j++) {
				cout << j << " ";
			}
			cout << endl;
			return;
		}
		if (counter[cumsum[i]].first == 0) {
			counter[cumsum[i]].first = 1;
			counter[cumsum[i]].second = i;
		} else {
			start_idx = counter[cumsum[i]].second;	
			end_idx = i;
			break;
		}
	}
	// cout << "start: " << start_idx << endl;
	// cout << "end: " << end_idx << endl;
	int len = end_idx - start_idx; 
	cout << len << endl;
	for (int i = start_idx + 2; i <= end_idx + 1; i++) {
		cout << i << " ";
	}
	cout << endl;
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();	
	}
	return 0;
}
