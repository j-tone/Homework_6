#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	double a, b, c, d;
	cout << "Enter the first complex number: ";
	cin >> a;
	cin >> b;
	cout << "Enter the second complex number: ";
	cin >> c;
	cin >> d;
	Complex c1(a, b), c2(c, d);
	cout << c1 << " + " << c2 << " = " << (c1 + c2) << endl;
	cout << c1 << " - " << c2 << " = " << (c1 - c2) << endl;
	cout << c1 << " * " << c2 << " = " << (c1 * c2) << endl;
	cout << c1 << " / " << c2 << " = " << (c1 / c2) << endl;
	cout << "|" << c1 << "| = " << c1.Abs() << endl;

}