#include "pch.h"
#include <iostream>
#include <string>
#include "windows.h"
#include <cstdio>
using namespace std;

class vector { //объявление класса 
public:
	double ax;
	double ay;
	double bx;
	double by;
	double sum1;
	double sum2;
	double dif1;
	double dif2;
	void set()//ввод
	{
		cout << "Введите координаты x вектора а:";
		cin >> ax;
		cout << "Введите координаты y вектора а:";
		cin >> ay;
		cout << "Введите координаты x вектора b:";
		cin >> bx;
		cout << "Введите координаты y вектора b:";
		cin >> by;
		sum1 = ax + bx;
		sum2 = ay + by;
		dif1 = ax - bx;
		dif2 = ay - by;

	}
	void show()//вывод
	{
		cout << "Вектор а=(" << ax << ";" << ay << ")"<< endl;
		cout << "Вектор b=(" << bx << ";" << by << ")" << endl;
		cout << "Сумма векторов а+b=(" << sum1 << ";" << sum2<< ")" << endl;
		cout << "Разность векторов а-b=(" << dif1 << ";" << dif2 << ")" << endl;

	}


};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	vector x;

	x.set();
	x.show();

	system("pause");
	return 0;
}
