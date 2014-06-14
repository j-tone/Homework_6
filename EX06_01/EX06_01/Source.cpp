#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	ofstream file("C:\\Users\\Justin\\Documents\\GitHub\\Homework_6\\EX06_01\\EX06_01\\Exercise13_1.txt", ios::out | ios::in);
	srand(time(NULL));
	if (!file){
		file.open("C:\\Users\\Justin\\Documents\\GitHub\\Homework_6\\EX06_01\\EX06_01\\Exercise13_1.txt");
	}

	for (int i = 0; i < 100; i++){
		int r = rand() % 100 + 1;
		file << r << " ";
	}
	file.close();
}