#include <iostream>
using namespace std;

int main(){
    int firstValue, secondValue;
    cin >> firstValue >> secondValue;

    cout << firstValue << '+' << secondValue << "=\"" << firstValue + secondValue << "\"\n";
    cout << firstValue << '-' << secondValue << "=\"" << firstValue - secondValue << "\"\n";
    cout << firstValue << '&' << secondValue << "=\"" << (firstValue & secondValue) << "\"\n";
    cout << firstValue << '|' << secondValue << "=\"" << (firstValue | secondValue) << "\"\n";
    cout << firstValue << '?' << secondValue << "=\"" << (firstValue > secondValue) << '"';
}