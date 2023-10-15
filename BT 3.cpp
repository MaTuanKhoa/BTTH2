#include <iostream>

using namespace std;
int main() {
    float a, b, c;
    
	cout << "Nhap vao 3 canh cua tam giac: ";
    cin >> a >> b >> c;
    
	if (a == b && b == c) {
        cout << "Tam giac nay la tam giac deu.";
    } else {
        cout << "Tam giac nay khong phai la tam giac deu.";
    }
    return 0;
}

