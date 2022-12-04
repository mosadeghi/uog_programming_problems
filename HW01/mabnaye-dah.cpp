/*
    There is no base 0!
    It may seem ridicules, but actually there is a base 1. don't belive me? just google it!
    this solution is suitable for converting numbers from bases 1 to 10 to their decimal equivalent.
*/

#include <iostream>
using namespace std;

int main(){
    int nonDecimalNumber, base;
    cin >> nonDecimalNumber >> base;

    short unitsDigit = nonDecimalNumber % 10;
    short tensDigit = (nonDecimalNumber / 10) % 10;
    short hundredsDigit = nonDecimalNumber / 100;
    int decimalEquivalent = (hundredsDigit * base * base) + (tensDigit * base) + unitsDigit;

    cout << decimalEquivalent;
}
