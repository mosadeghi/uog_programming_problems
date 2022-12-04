#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int result = 1;
    while (result <= n)
        result *= 2;
    
    cout << result;
}