#include "pch.h"
#include <iostream>
#include <string>
#include "windows.h"
#include <cstdio>
using namespace std;

class students { //объявление класса 
public:
	string *members;//объявление переменных 

	int n;

	void set()//ввод
	{
		cout << "Введите количество студентов:" << endl;
		cin >> n;
		members = new string[n];
		
		for (int i = 0; i < n; i++) 
		{
			cout << "Введите группу_ФИО_год рождеия студента №" << i+1 << ":"<< endl;
			cin >> members[i];

		}
	}
	void show()//вывод
	{
		cout << endl << "-----------------------------------------------------" << endl;
		for (int i = 0; i < n; i++)
		{
			cout <<"студент №"<< i+1 << ":" << members[i] << endl;

		}

	}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	students x;

	x.set();
	x.show();

	system("pause");
	return 0;
}
