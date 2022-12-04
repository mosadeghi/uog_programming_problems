#include <iostream>
using namespace std;

int main(){
    int date;
    cin >> date;
    
    int month = date % 100;
    int year = date / 100;

    cout << "sale 13" << year << " va mahe ";
    switch(month){
        case 1:
            cout << "Farv";
            break;
        case 2:
            cout << "Ord";
            break;
        case 3:
            cout << "Khor";
            break;
        case 4:
            cout << "Tir";
            break;
        case 5:
            cout << "Mor";
            break;
        case 6:
            cout << "Shah";
            break;
        case 7:
            cout << "Mehr";
            break;
        case 8:
            cout << "Aban";
            break;
        case 9:
            cout << "Azar";
            break;
        case 10:
            cout << "Dey";
            break;
        case 11:
            cout << "Bah";
            break;
        case 12:
            cout << "Esf";
            break;
        default:
            cout << "Err";
    }
    cout << " hastim";
}
