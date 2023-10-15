#include <iostream>
#include <cmath>
using namespace std; 
int main()
{
	int a, b, c, c1, c2, ch1, cv;
	float p, dt;
//input	
	cout<<"Nhap do dai ba canh a, b, c: ";
	cin>>a>>b>>c;
	ch1 = a;
	c1 = a; 
	c2 = a;
    if (b > ch1) {ch1=b;}
    	else{c1=b;}
    if (c > ch1) {ch1=c;}
    	else{c2=c;}
	if( c1+c2>ch1){
		p=(a+b+c)/2;
		cv=a+b+c;
		dt=sqrt(p*(p-a)*(p-b)*(p-c));	
		cout<<"Chu vi: "<<cv<<" Dien tich: "<<dt;
	}
		else{cout<<"a, b, c khong phai do dai tam giac"; 
	} 
	return 0; 
}

