#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<vector<int>> arr(4, vector<int> (2));
	int cnt_1 = 0, cnt_2 = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
			if (j == 0) {
				cnt_1 += arr[i][j];
			} else if (j == 1) {
				cnt_2 += arr[i][j];
			}
		}
	}
	if (cnt_1 > cnt_2) {
		cout << 1;
	} else if (cnt_1 < cnt_2) {
		cout << 2;
	} else {
		cout << "DRAW";
	}

	return 0;
}