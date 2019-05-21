#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int A, B, C;
	char ABC[2][10000];

	cout << "Please Enter Any Character/s: " << endl;
	cin >> ABC[0];

	for (A = 0; ABC[0][A] != '\0'; A++)
	{
		C = A;
	}
	B = C;
	ABC[1][0] = ABC[0][C];


	for (A = 0; A != C; A++, B--)
	{
		ABC[1][B] = ABC[0][A];
	}
	ABC[1][C + 1] = '\0';

	cout << "Reversed: " << ABC[1] << endl;
	cout << "The Size of the Array is: " << C + 1 << endl;

	_getch();
	return 0;
}