#include "pch.h"
#include <iostream>
#include <cmath>
#include <clocale>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, m, n; ;//объявления переменных типа double

	cout << "Введите значение a: ";//ввод значений 
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;

	if (a >= b)//вычисления 
	{
		n = cbrt(a - b);
	}
	else
	{
		n = a * a + (a - b) / (sin(a * b));
	}

	if (n < b)
	{
		m = (n + a) / (-b) + sqrt(sin(a) * sin(a) - cos(n));
	}
	else {
		if (n == b)
		{
			m = b * b + tan(n * a);
		}
		else
		{
			m = b * b * b + n * a * a;
		}
	}

	cout << "a = " << a << endl;//вывод значений 
	cout << "b = " << b << endl;
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;

	system("pause");
	return 0;
}
