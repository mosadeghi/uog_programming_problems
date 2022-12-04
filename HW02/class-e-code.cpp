#include <iostream>
using namespace std;

int main(){
	int k;
	cin >> k;

    int theLastAddedNumber = 1;
    int currentLength = 1;

	while(currentLength < k){
		theLastAddedNumber++;

        // counting digits
		int numberOfdigits = 0, temp = theLastAddedNumber;
		while(temp > 0){
			numberOfdigits++;
			temp /= 10;
		}

        currentLength += numberOfdigits;
	}

	while(currentLength > k){
        // discarding a digit
		theLastAddedNumber/=10;
		currentLength--;
	}
    
	cout << theLastAddedNumber % 10;
}