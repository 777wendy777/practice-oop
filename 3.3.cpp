#include "pch.h"
#include <iostream>
#include <string>
#include "windows.h"
#include <cstdio>
using namespace std;

class car { //объявление класса 
public:
	string mark;//объявление переменных 
	string type;
	string power;
	string model;
	int year;
	int price;

	void set()//ввод
	{
		cout << "Введите тип кузова:";
		getline(cin, type);
		cout << "Введите марку:";
		getline(cin, mark);
		cout << "Введите название модели:";
		getline(cin, model);
		cout << "Введите год выпуска:";
		cin >> year;
		cout << "Введите мощность:";
		cin >> power;
		cout << "Введите цену:";
		cin >> price;
		cout << "---------------------------------------" << endl;
	}
	void show()//вывод
	{
		cout << "Тип кузова:" << type << endl;
		cout << "Год выпуска:" << year << endl;
		cout << "Марка:" << mark << endl;
		cout << "Название модели:" << model << endl;
		cout << "Мощность:" << power << endl;
		cout << "Цена:" << price << endl;
	}


};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	car x;

	x.set();
	x.show();

	system("pause");
	return 0;
}