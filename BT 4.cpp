#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Nhap ba canh cua tam giac: ";
    cin >> a >> b >> c;

    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
        cout << "Tam giac nay l� tam giac vuong.";
    }
    else {
        cout << "Tam giac n�y khong phai l� tam giac vuong.";
    }

    return 0;
}

