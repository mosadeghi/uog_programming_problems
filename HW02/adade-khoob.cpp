#include <iostream>
using namespace std;

int main(){
	int k;
	cin >> k;

    int indexOfCurrentGoodNumber = 1;
    int currentGoodNumber = 1;
    int numberOfDivisorsOfCurrentGoodNumber = 1;

    while (numberOfDivisorsOfCurrentGoodNumber < k){
        // finding next good number
        indexOfCurrentGoodNumber++;
        currentGoodNumber = currentGoodNumber + indexOfCurrentGoodNumber;

        // counting its divisors
        numberOfDivisorsOfCurrentGoodNumber = 0;
        for (int i=1; i<=currentGoodNumber; i++){
            if (currentGoodNumber % i == 0)
                numberOfDivisorsOfCurrentGoodNumber++;
        }
    }

    cout << currentGoodNumber;
}