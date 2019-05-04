#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float a, b, c;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number ";
	cin >> c;
	
	if ((a<c) && (b<c))
		cout << "\nThe LARGEST of the three numbers is = " << c;
	else if ((a<b) && (c<b))
		cout << "\nThe LARGEST of the three numbers is = " << b;
	else if ((b<a) && (c<a))
		cout << "\nThe LARGEST of the three numbers is = " << a;
	else if ((a==b) && (c<a))
		cout << "\nThe LARGEST of the three numbers is = " << a;
	else if ((a==c) && (b<a))
		cout << "\nThe LARGEST of the three numbers is = " << a;
	else if ((b==c) && (a<b))
		cout << "\nThe LARGEST of the three numbers is = " << b;
			
	_getch();
	return 0;
}
