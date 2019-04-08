#include "pch.h"
#include <iostream>
#include<string>
#include "windows.h"

using namespace std;

class Vehicle//абстрактный базовый класс транспортное средство 
{
protected:
	string model;
	string name;
	int speed;
public:
	void set()
	{
		cout << "Введите марку:";
		cin >> name;
		cout << "Введите модель:";
		cin >> model;
		cout << "Введите максимальную скорость:";
		cin >> speed;
		
	}
	virtual void out() = 0;
};

class avto : public Vehicle  //производный класс автомобиль
{
public:
	void out()
	{
		cout << "максимальная скорость автомобиля " << name << " "<< model <<" "<< speed<< "км/ч" << endl;
	}

};

class Bycicle : public Vehicle//производный класс велосипед 
{
public:
	void out()
	{
		cout << "максимальная скорость велосипеда " << name << " " << model << " " << speed << "км/ч" << endl;
	}

};
class Bus : public Vehicle//производный класс автобус 
{
public:
	void out()
	{
		cout << "максимальная скорость автобуса " << name << " " << model << " " << speed << "км/ч" << endl;
	}

};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	cout << "авто" << endl;
	avto a;
	a.set();
	a.out();
	cout << endl;
	cout << "велосипед" << endl;
	Bycicle b;
	b.set();
	b.out();
	cout << endl;
	cout << "автобус" << endl;
	Bus c;
	c.set();
	c.out();

	system("pause");
	return 0;
}
