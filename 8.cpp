#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, i;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Multiplication table of " << n << ": \n";
	
	for (i=1; i<=10; i++)
	{
		cout << i << " * " << n << " = " << n*i << endl;
	}
	
	_getch();
	return 0;
}
