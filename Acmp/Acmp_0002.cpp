#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0; cin >> n;

	if (n > 0 && n != 0) {
		for (int i = 1; i <= n; i++) {
			cnt += i;
		}
	} else {
		for (int i = 1; i >= n; i--) {
			cnt += i;
		}
	}

	cout << cnt;
	return 0;
}