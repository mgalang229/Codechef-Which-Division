#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int r;
		cin >> r;
		// compare the values
		if (r < 1600) {
			cout << 3;
		} else if (r < 2000) {
			cout << 2;
		} else {
			cout << 1;
		}
		cout << '\n';
	}
	return 0;
}
