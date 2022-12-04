#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;

	for (int i=0; i<a; i++){
		for (int j=0; j<a; j++){
            bool isOnTheTopSide = i==0;
            bool isOnTheBottomSide = i==a-1;
            bool isOnTheLeftSide = j==0;
            bool isOnTheRightSide = j==a-1;
            bool isOnTheSides = isOnTheTopSide || isOnTheBottomSide || isOnTheLeftSide || isOnTheRightSide;

            bool isOnTheDiagonalA = i == j;
            bool isOnTheDiagonalB = i + j == a-1;
            bool isOnTheDiagonals = isOnTheDiagonalA || isOnTheDiagonalB;

            bool isOverDiagonalA = i<j;
            bool isUnderDiagonalB = i+j>a-1;
            bool isInTheRightQuarter = isOverDiagonalA && isUnderDiagonalB;
            
			if (isOnTheSides || isOnTheDiagonals || isInTheRightQuarter)
				cout << "#";
			else
				cout << " ";
		}
		cout << '\n';
	}
}
