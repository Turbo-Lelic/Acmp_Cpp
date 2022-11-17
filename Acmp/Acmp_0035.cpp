#include <iostream>

using namespace std;

int main() {
	int k; cin >> k;

	for (int i = 0; i < k; i++) {
		int n, m; cin >> n >> m;
		long long d = 19 * m + (n + 239) * (n + 366) / 2;
		cout << d << endl;
	}

	return 0;
}