#include <iostream>
#include <string>

using namespace std;

int main() {
	string n; cin >> n;
	int cnt = 0, max = 0;

	for (int i = 0; i < n.size(); i++) {
		if (n[i] == '0') {
			cnt++;
			if (cnt > max) {
				max = cnt;
			}
		}
		if (n[i] == '1') {
			cnt = 0;
		}
	}

	cout << max;
	return 0;
}