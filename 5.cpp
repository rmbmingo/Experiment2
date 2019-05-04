#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i;
	
	cout << "Counting... \n";
	for (i=1; i<=10; i++) cout << i << ",";
	for (i=12; i<=28; i+=2) cout << i << ",";
	for (i=30; i<=30; i++) cout << i;

	_getch();
	return 0;
}
