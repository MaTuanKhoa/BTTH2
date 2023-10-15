#include <iostream>
using namespace std;

int main() {
    int month, year;
    cout << "Nhap vao thang (1-12): ";
    cin >> month;
    cout << "Nhap vao nam: ";
    cin >> year;

    int days;

    if (month == 2) {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0)
                    days = 29;
                else
                    days = 28;
            }
            else
                days = 29;
        }
        else
            days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;

    cout << "Thang " << month << " nam " << year << " co " << days << " ngay." << endl;

    return 0;
}

