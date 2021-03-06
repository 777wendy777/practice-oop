#include "pch.h"
#include <iostream>
#include<string>
#include "windows.h"

using namespace std;

class  Screen //абстрактный базовый класс экран
{
protected:
	int wide;
	int length;

public:
	virtual void resolution() = 0;
};

class  Keyboard //абстрактный базовый клавиатура
{
protected:
	string type;

public:
	virtual void klava() = 0;
};

class Laptop: public  Screen, Keyboard //производный абстрактный класс ноутбук
{
public:
	void resolution()
	{
		cout << "Введите разрешение по ширине и длине:";
		cin >> wide >> length;
	}
	void klava()
	{
		cout << "Введите тип клавиатуры:";
		cin >> type;
	}
	void out()
	{
		cout << "Разрешение экрана ноутбука "<<wide<<"x"<<length<<endl;
		cout << "Тип клавиатуры ноутбука " << type<< endl;
	}
	
};
class Phone : public  Screen, Keyboard //производный класс телефон
{
public:
	void resolution()
	{
		cout << "Введите разрешение по ширине и длине:";
		cin >> wide >> length;
	}
	void klava()
	{
		cout << "Введите тип клавиатуры:";
		cin >> type;
	}
	void out()
	{
		cout << "Разрешение экрана телефона " << wide << "x" << length << endl;
		cout << "Тип клавиатуры телефона " << type << endl;
	}
};
class PC : public  Screen, Keyboard //производный класс ПК
{
public:
	void resolution()
	{
		cout << "Введите разрешение по ширине и длине:";
		cin >> wide >> length;
	}
	void klava()
	{
		cout << "Введите тип клавиатуры:";
		cin >> type;
	}
	void out()
	{
		cout << "Разрешение экрана ПК " << wide << "x" << length << endl;
		cout << "Тип клавиатуры ПК " << type << endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");

	cout << "Ноутбук" << endl;
	Laptop a;
	a.resolution();
	a.klava();
	a.out();
	
	cout << "Телефон" << endl;
	Phone b;
	b.resolution();
	b.klava();
	b.out();

	cout << "Пк" << endl;
	PC c;
	c.resolution();
	c.klava();
	c.out();
	
	system("pause");
	return 0;
}
