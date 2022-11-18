#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<char> arr(6);
	int cnt_1 = 0, cnt_2 = 0;

	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
		if (i >= 0 && i <= 2) {
			cnt_1 += arr[i] - '0';
		}
		if (i >= 3 && i <= 5) {
			cnt_2 += arr[i] - '0';
		}
	}
	if (cnt_1 == cnt_2) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}