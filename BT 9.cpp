#include <iostream> 

using namespace std;
int main(){
	int x,y;
	string a;
//input
	cout<<"nhap 2 so x va y: " ;
	cin>>x>>y;
	cout<<"nhap loai phep tinh can thuc hien: " ;
	cin>>a;
//output
	if (a=="+"){
		cout<<"tong 2 so la x + y = "<<x+y;
	}
	else if (a=="-"){
		cout<<"hieu 2 so la x - y = "<<x-y;
	}
	else if (a=="*"){
		cout<<"tich 2 so la x * y = "<<x*y;
	}
	else if (a=="/" and y!=0){
		cout<<"tong 2 so la x / y = "<<x/y;
	}
	else if (a=="/" and y==0){
		cout<<"khong chia duoc cho 0";
	}
	else {
		cout<<"yeu cau ban nhap dung phep tinh";
	}
return 0;
}
