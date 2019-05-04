#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	int v;
	float x, y, z;
	z=2.5;
	
	cout << "Enter the value of x: ";
	cin >> x;
	cout << "Enter the value of y: ";
	cin >> y;
	
	if (x==1 && y<5 && y>1)
		cout << "The value of v is = " << x*y*z << endl;
	else if (x==1 && y>=5)
		cout << "The value of v is = " << x+(y/z) << endl;
	else if (x==2 && y<=5)
		cout << "The value of v is = " << abs((x-y)/z) << endl;
	else if (x==2 && y>5)
		cout << "The value of v is = " << x-sqrt(y+z) << endl;
	else if (x>2 && y>0)
		cout << "The value of v is = " << x+y+z << endl;
		
	_getch();
	return 0;
	
}
