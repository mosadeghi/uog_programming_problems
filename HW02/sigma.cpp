#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int result = 0;
    for (int i=-10; i<=m; i++)
        for (int j=1; j<=n; j++)
            result += ((i+j)*(i+j)*(i+j)) / (j*j);
    
    cout << result;
}