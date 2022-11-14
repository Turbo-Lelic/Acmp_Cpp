#include <iostream>
#include <stdio.h>
#include <locale>
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Russian");

    int n = 0;

    cin >> n;
    cout << n + 1;

    return 0;
}