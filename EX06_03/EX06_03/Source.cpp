#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

void getInfo(int &year, char &gender, string &name);
string chooseFile(int &year);
string formFile(int year);

int main()
{
	int year;
	char gender;
	string name;
	getInfo(year, gender, name);

	string filename = chooseFile(year);

	fstream file("C:\\Users\\Justin\\Documents\\GitHub\\Homework_6\\EX06_03\\" + filename, ios::in);
	if (!file){
		cout << "Can't open the damn file." << endl;
		return 0;
	}

	string line;
	string findName;
	int count = 0;
	int rank = 0;
	while (getline(file, line)){
		count++;
		int firstspace = line.find('\t');
		int secondspace = line.find('\t', firstspace + 1);
		int thirdspace = line.find('\t', secondspace + 1);
		int fourthspace = line.find('\t', thirdspace + 1);

		string boyName = (line.substr(firstspace + 1, secondspace - firstspace - 1));
		string girlName = (line.substr(thirdspace + 1, fourthspace - thirdspace - 1));

		switch (gender){
		case 'M':
		case 'm':
			if (boyName == name){
				rank = count;
			}
		case 'F':
		case 'f':
			if (girlName == name){
				rank = count;
			}
		}
	}
	file.clear();
	file.close();
	if (rank != 0)
		cout << name << " is ranked #" << rank << " in the year " << year << " bro." << endl;
	else
		cout << name << " is not ranked at all for the year of " << year << ", bro." << endl;

}

void getInfo(int &year, char &gender, string &name){
	cout << "Enter a year: ";
	cin >> year;
	cout << "Male or female? ";
	cin >> gender;
	cout << "Enter the name of the kid: ";
	cin >> name;
}

string chooseFile(int &year){
	string filename;
	switch (year){
	case 2013:
	case 2012:
	case 2011:
	case 2010:
	case 2009:
	case 2008:
	case 2007:
	case 2006:
	case 2005:
	case 2004:
	case 2003:
	case 2002:
	case 2001:
	case 2000:
		filename = formFile(year);
	}
	return filename;
}

string formFile(int year){
	string txt = ".txt";
	stringstream conv;
	conv << year;
	string sYear = conv.str();
	string construct = ("Babynames" + sYear);
	return (construct + txt);
}
