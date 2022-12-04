#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

    int a = 1;
	int b = 1;
	
	for (int i=1; i<=n; i++){
		if (i > b){
			int temp = a + b;
			a = b;
			b = temp;
		}

		if (i == b)
			cout << "+";
		else
			cout << "-";
	}
	
}