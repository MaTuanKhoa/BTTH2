#include <iostream>
using namespace std;

int main() {
    float toan, ly, hoa;
    cout << "Nhap diem Toan: ";
    cin >> toan;
    cout << "Nhap diem Ly: ";
    cin >> ly;
    cout << "Nhap diem Hoa: ";
    cin >> hoa;

    float tong_diem = toan + ly + hoa;
    if (30 >=tong_diem and tong_diem >= 15 and toan >= 4 and ly >= 4 and hoa >= 4) {
        if (toan >=5 and ly >= 5 and hoa >= 5) {
            cout << "Hoc deu cac mon.";
        }
        else {
            cout << "Hoc chua deu cac mon.";
        }
    }
    else if (tong_diem > 30) {
    	cout<<"ban nhap sai diem";
	}
    else {
        cout << "Thi hong.";
    }

    return 0;
}

