#include <iostream>
#include <stdio.h>
#include <locale>
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Russian");

    int x = 0;
    int y = 0;

    cin >> x;
    cin >> y;

    if (x < y) 
    {
        printf("<");
    }
    if (x > y)
    {
        printf(">");
    }
    if (x == y)
    {
        printf("=");
    }
    return 0;
}