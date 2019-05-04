#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char packagePurchased;
	int timeUsed;
	
	cout << "Select a Package: \n";
	cout << "\nPackage A \n";
		cout << "Cost = P995/month \n";
		cout << "Hours Provided = 10 hours \n";
		cout << "Addiotional Hour/s = P20/hour \n";
	cout << "\nPackage B \n";
		cout << "Cost = P1495/month \n";
		cout << "Hours Provided = 20 hours \n";
		cout << "Additional Hour/s = P10/hour \n";
	cout << "\nPackage C \n";
		cout << "Cost = P1995/month \n";
		cout << "Hours Provided = Unlimited \n";
		cout << "Additional Hour/s = Unlimited \n";
		
	cout << "\nEnter a package: ";
	cin >> packagePurchased;
	while(packagePurchased!= 'A' && packagePurchased!='a' && packagePurchased!='B' && packagePurchased!='b'&& packagePurchased!='C' && packagePurchased!='c')
	{cout <<"Error! You must select a package A, B, or C. \n";
	cout << "\nEnter a package: ";
	cin >> packagePurchased;}
	cout << "Enter the number of hours used: ";
	cin >> timeUsed;
	while((timeUsed > 0) && (timeUsed > 744))
	{cout << "Error! Hours cannot be negative or exceed 744. \n";
	cout << "\nEnter the number of hours used: ";
	cin >> timeUsed;}
	
	switch (packagePurchased)
	{
		//allow either upper case or lower case characters
		case 'A':
		case 'a':
			{if ((timeUsed < 11) && (timeUsed > 0))
				cout << "Your total amount due is: P995 \n";
			else 
				cout << "Your total amount due is: P" << 995+(timeUsed-10)*20;}
				break;
		case 'B':
		case 'b':
			{if ((timeUsed < 21) && (timeUsed > 0))
				cout << "Your total amount due is : P1495 \n";
			else
				cout << "Your total amount due is: P" << 1495+(timeUsed-20)*10;}
				break;
		case 'C':
		case 'c':
				cout << "Your total amount due is: P1995 \n";
				break;
			
	}
			
	_getch();
	return 0;
	
}
		
