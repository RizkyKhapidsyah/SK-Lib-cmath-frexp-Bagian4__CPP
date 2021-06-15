#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	double x = 6.81, significand;
	int exp;

	significand = frexp(x, &exp);
	cout << x << " = " << significand << " * 2^" << exp << endl;

	_getch();
	return 0;
}