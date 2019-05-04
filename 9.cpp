#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int row, column, r, c;
	bool abort = false;
	
	do
	{
		cout << "\nHow many rows: ";
		cin >> row;
		cout << "How many columns: ";
		cin >> column;
	
		for(r=0; r<row; r++)
		{
			for(c=0; c<column; c++)
			{
				cout << "*";
			}
			cout << "\n";
		} 
		
	} while (!abort);
	
	_getch();
	return 0;
}
