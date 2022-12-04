#include <iostream>
using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    double slopeOfLineA = (double)(y2 - y1) / (x2 - x1);
    double slopeOfLineB = (double)(y4 - y3) / (x4 - x3);
    double yInterceptOfLineA = y1 - slopeOfLineA * x1;
    double yInterceptOfLineB = y3 - slopeOfLineB * x3;

    if (slopeOfLineA == slopeOfLineB){
        if (yInterceptOfLineA == yInterceptOfLineB)
            cout << "montabegh";
        else
            cout << "movazi";
    } else {
        if (slopeOfLineA * slopeOfLineB == -1)
            cout << "amood";
        else
            cout << "moteghate";
    }
}