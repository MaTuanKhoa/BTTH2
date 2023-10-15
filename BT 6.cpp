//thuvien 
#include <iostream>
//khaibao 
using namespace std;
int main() {
    int a, b, c, d;
//input 
	cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    cout << "Nhap so thu ba: ";
    cin >> c;
    cout << "Nhap so thu tu: ";
    cin >> d;
//xulydulieu 
    int max_num = a;
    if (b > max_num) {
        max_num = b;
    }
    if (c > max_num) {
        max_num = c;
    }
    if (d > max_num) {
        max_num = d;
    }
//output 
    cout << "So lon nhat là: " << max_num << endl;
	return 0;
 
}

