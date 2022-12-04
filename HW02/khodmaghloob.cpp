#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;

    int temp = number;
    int reversed = 0;

    while (temp > 0){
        int unitsDigitOfTemp = temp % 10;
        reversed = reversed * 10 + unitsDigitOfTemp;
        temp /= 10;
    }

    if (number == reversed)
        cout << "YES";
    else
        cout << "NO";
}