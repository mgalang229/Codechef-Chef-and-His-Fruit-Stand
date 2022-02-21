#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<long long> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int m;
		cin >> m;
		vector<long long> b(m);
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}
		long long mx = INT_MIN;
		if (n < m) {
 			swap(a, b);
 			swap(n, m);
 		}
 		int diff = n - m;
 		if (n % m == 0) { // divisible
 			for (int i = 0; i < n; i++) {
 				mx = max(mx, a[i] + b[i % m]);
 			}
 		} else if ((n % 2 == 1 && m % 2 == 1) || (n % 2 != m % 2) || (diff == 1)) { // both odd or different parity or diff is 1
 			mx = *max_element(a.begin(), a.end()) + *max_element(b.begin(), b.end());
 		} else { // both even
 			for (int i = 0; i < n; i++) {
 				
 			}
 		}
		cout << mx << '\n';
	}
	return 0;
}