#include <iostream>
using namespace std;

int main() {
    int seconds;
    cout << "Nhap so giay tu 0 den 86399: ";
    cin >> seconds;

    if (seconds < 0 || seconds > 86399) {
        cout << "So giay khong hop le";
        return 0;
    }

    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;

    cout<<hours<<":"<<minutes<<":"<<seconds;

    return 0;
}

