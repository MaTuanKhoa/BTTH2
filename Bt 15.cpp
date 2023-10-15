#include <iostream> 
#include <cmath>
using namespace std; 
int main()
{
	for(int x=1;x<=20;x++)
		for(int y=1;y<=33;y++)
			for(int z=3;z<=100;z+=3)
				if (x+y+z==100 and x*5+y*3+z/3==100){
					cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<"\n";
				}
}
