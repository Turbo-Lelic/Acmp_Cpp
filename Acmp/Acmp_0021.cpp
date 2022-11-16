#include <iostream>

using namespace std;

int main() {
    long long a, b, c; cin >> a >> b >> c;
    long long max = a, min = a;

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    cout << max - min;
    return 0;
}