#include "pch.h"
#include "windows.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");

	ifstream f("fff.txt");	// Открытие файла на считывание данных изз него

	while (!f.eof()) 
	{
		string s;
		f >> s;	// Считывание данных из файла
		cout << s << endl;
	}

	f.close();	// Закрытие файла
	return 0;
}