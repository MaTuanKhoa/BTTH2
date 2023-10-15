#include <iostream>
using namespace std;

int main() {
    float hours, rate;
    cout << "Nhap so gio lam: ";
    cin >> hours;
    cout << "Nhap luong gio: ";
    cin >> rate;

    float salary;
    if (hours <= 40) {
        salary = hours * rate;
    }
    else {
        salary = 40 * rate + (hours - 40) * rate * 1.5;
    }

    cout << "So tien luong tong cong la: " << salary << endl;

    return 0;
}

