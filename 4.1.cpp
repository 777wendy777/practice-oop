#include "pch.h"
#include <iostream>
#include "windows.h"

using namespace std;

double *create(int size) //выделение памяти 
{
	double* array = new double[size];
	return array;
}
void fill(double *array, int size)//заполнение массива 
{
	for (int i = 0; i < size; i++) 
	{
		array[i] = rand() % 100;
	}
}
void print(double *array, int size,int k) //вывод массива
{
	cout << "Массив "<<k<<":" << endl;
	for (int i = 0; i < size; i++) 
	{
		cout <<  "Элемент " << i+1 << "="<< array[i] <<endl;
	}
	cout << endl;
}
void arrdelete(double *array, int size) //освобождение памяти 
{
	delete[] array;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	int k=1;
	int size;
	cout << "Введите размер массива(если хотите выйти,то введите 0)"<<endl;
	cin >> size;
	while (size > 0)
	{
		double *array = create(size);
		fill(array, size);
		print(array, size,k);
		arrdelete(array, size);
		k++;
		cout << "Введите размер массива(если хотите выйти,то введите 0)" << endl;
		cin >> size;
	}
	system("pause");
	return 0;
}