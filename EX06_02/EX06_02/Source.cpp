#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int count = 0;
	char space = ' ';
	string filename;
	cout << "Pleases to enter a filename, please: ";
	cin >> filename;
	fstream file(filename.c_str(), ios::in | ios::out);

	if (!file){
		cout << "THAT DOESN'T EXIST FOOL" << endl;
	}

	else{
		while (file >> space)
			count++;
		cout << "There are " << count << " characters in this file." << endl;
	}
	file.close();
}