#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int i, Number[10];
	double Smallest, Largest, Total, Average;

	cout << "Please Enter 10 Integers" << endl;

	for (i = 0; i < 10; i++)
	{
		cin >> Number[i];
	}

	Smallest = Number[0];
	Largest = Number[0];
	Total = 0;
	Average = 0;

	for (i = 0; i < 10; i++)
	{
		if (Smallest >= Number[i])
			Smallest = Number[i];
	}

	for (i = 0; i < 10; i++)
	{
		if (Largest <= Number[i])
			Largest = Number[i];
	}

	for (i = 0; i < 10; i++)
	{
		Total += Number[i];
	}

	for (i = 0; i < 10; i++)
	{
		Average += Number[i];
	}
	Average /= 10;

	cout << "The Smallest Integer Is: " << Smallest << endl;
	cout << "The Largest Integer Is: " << Largest << endl;
	cout << "The Total Sum of the Integers Is: " << Total << endl;
	cout << "The Average of the Integers Is: " << Average << endl;

	_getch();
	return 0;
}