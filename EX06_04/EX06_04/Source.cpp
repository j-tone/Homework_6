#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle c1(4), c2(4);
	if (c1 == c2){
		cout << "Yay it worked!" << endl;
	}
	else
		cout << "You suck at coding.\n";

	cout << "Now for the real test.\n";

	Circle c3(5), c4(1);
	c3 = c4;
	if (c3 == c4){
		cout << "I'M SO GOOD AT CODING\n";
	}
	else
		cout << "Bro. What are you doing. Just stop now.\n";

	cout << "The final trial.\n";

	Circle c5;
	c5 = ((c4 + c3) + (c2 + c1));
	cout << c5.getRadius() << endl;

	cout << "BOOM, GOOD NIGHT.\n";
}