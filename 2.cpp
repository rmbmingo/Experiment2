#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float gallon, balance, bill;
	cout << "Gallons used: ";
	cin >> gallon;
	cout << "Unpaid balance: ";
	cin >> balance;
	
	bill = (35+(1.10*gallon));
	
	if (balance > 0)
		cout << "Your water bill is = P" << bill+balance+20;
	else
		cout << "Your water bill is = P" << bill;
		
	_getch();
	return 0;
}
