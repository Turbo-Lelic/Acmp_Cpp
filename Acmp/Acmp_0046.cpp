#include <iostream>
#include <stdio.h>
#include <locale>
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Russian");
    
    int n = 0;

    cin >> n;

    switch (n)
    {
        case 0:
            cout << "3";
        break;   

        case 1:
            cout << "2.7";
        break;

        case 2:
            cout << "2.72";
        break;

        case 3:
            cout << "2.718";
        break;

        case 4:
            cout << "2.7183";
        break;

        case 5:
            cout << "2.71828";
        break;

        case 6:
            cout << "2.718282";
        break;

        case 7:
            cout << "2.7182818";
        break;

        case 8:
            cout << "2.71828183";
        break;

        case 9:
            cout << "2.718281828";
        break;

        case 10:
            cout << "2.7182818285";
        break;

        case 11:
            cout << "2.71828182846";
        break;

        case 12:
            cout << "2.718281828459";
        break;

        case 13:
            cout << "2.7182818284590";
        break;

        case 14:
            cout << "2.71828182845905";
        break;

        case 15:
            cout << "2.718281828459045";
        break;

        case 16:
            cout << "2.7182818284590452";
        break;

        case 17:
            cout << "2.71828182845904524";
        break;

        case 18:
            cout << "2.718281828459045235";
        break;

        case 19:
            cout << "2.7182818284590452354";
        break;

        case 20:
            cout << "2.71828182845904523536";
        break;

        case 21:
            cout << "2.718281828459045235360";
        break;

        case 22:
            cout << "2.7182818284590452353603";
        break;

        case 23:
            cout << "2.71828182845904523536029";
        break;

        case 24:
            cout << "2.718281828459045235360288";
        break;

        case 25:
            cout << "2.7182818284590452353602875";
        break;
    }
    return 0;
}