#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Nhap vao mot so tu 0 den 9: ";
    cin >> number;

    switch (number) {
        case 0:
            cout << "Khong";
            break;
        case 1:
            cout << "Mot";
            break;
        case 2:
            cout << "Hai";
            break;
        case 3:
            cout << "Ba";
            break;
        case 4:
            cout << "Bon";
            break;
        case 5:
            cout << "Nam";
            break;
        case 6:
            cout << "Ssu";
            break;
        case 7:
            cout << "Bay";
            break;
        case 8:
            cout << "Tam";
            break;
        case 9:
            cout << "Chin";
            break;
        default:
            cout << "So khong hop le.";
    }

    return 0;
}

