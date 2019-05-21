#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int i, Temperature[3][7];

	cout << "Enter temperatures for a week of Province A, Province B, and Province C. " << endl;

	for (i = 0; i < 7; i++)
	{
		cout << "Province A, Day# " << i + 1 << ": ";
		cin >> Temperature[0][i];
	}

	for (i = 0; i < 7; i++)
	{
		cout << "Province B, Day# " << i + 1 << ": ";
		cin >> Temperature[1][i];
	}

	for (i = 0; i < 7; i++)
	{
		cout << "Province C, Day# " << i + 1 << ": ";
		cin >> Temperature[2][i];
	}


	cout << "Displaying Values: " << endl;


	for (i = 0; i < 7; i++)
	{
		cout << "Province A, Day " << i + 1 << " = " << Temperature[0][i] << endl;
	}

	for (i = 0; i < 7; i++)
	{
		cout << "Province B, Day " << i + 1 << " = " << Temperature[1][i] << endl;
	}

	for (i = 0; i < 7; i++)
	{
		cout << "Province C, Day " << i + 1 << " = " << Temperature[2][i] << endl;
	}

	_getch();
	return 0;
}