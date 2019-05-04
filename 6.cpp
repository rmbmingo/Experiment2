#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i, a, b, c;
	a=0;
	b=1;
	
	cout << "Fibonacci numbers: \n";
    for (i=1; i<=20; i++)
    {
    	cout << a << ",";
    	c=a+b;
    	a=b;
    	b=c;
	}
    
    _getch();
    return 0;
}
