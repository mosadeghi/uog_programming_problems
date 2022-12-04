#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

    int a;
	int b = 1;
	int c = 1;

	for (int i=1; i<=n; i++){
		if (i == c){
            cout << '+';

            // calculating next fib
            a = b;
            b = c;
            c = a + b;
        } else
            cout << '-';
	}
}