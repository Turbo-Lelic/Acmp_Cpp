#include <iostream>
#include <stdio.h>
#include <locale>
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Russian");

    int x = 0;
    int y = 0;

    cin >> x >> y;
    cout << x + y;
    
    return 0;
}