#include <iostream>
using namespace std;

/*
    Actually, there are a lot of different sorting algorithms and this is only one of the suitable solutions, bubble sort.

*/

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int temp; // we need a temp variable to swap value of two variables.

    if (a > b){
        temp = b;
        b = a;
        a = temp;
    }

    if (b > c){
        temp = c;
        c = b;
        b = temp;
    }

    if (a > b){
        temp = b;
        b = a;
        a = temp;
    }

    cout << a << ' ' << b << ' ' << c;
}