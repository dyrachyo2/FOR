#include<iostream>
#include<Windows.h>
using namespace std;
//#define FAKTORIAL
//#define PIFAGOR
//#define UMNOJENIE
//#define MULTI
//#define PIFA


void main()
{
#ifdef FAKTORIAL
	int i, fact = 1, n;
	cout << "Введите число\t"; cin >> n;
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	cout << fact;
#endif // FAKTORIAL

#ifdef PIFAGOR
	cout << "Таблица пифагора" << endl;
	for (int i = 1; i < 10.5; i++)
	{
		for (int j = 1; j <= 10.5; j++)
			cout << i * j << " ";
		cout << endl;
	}
#endif // PIFAGOR

#ifdef UMNOJENIE

	
	for (int i = 1; i < 10.5; i++)
	{
		for (int j = 1; j <= 10.5; j++)
			cout << i << " * " << j << " = " << i * j << endl;
		cout << endl;
	}
#endif // UMNOJENIE

#ifdef MULTI

	for (int i = 0; i < 10; i++)
	{
		cout << "Таблица умножения на " << i << "\t" << endl;
		for (int j = 0; j < 10; j++)
		{
			cout << "\t\t\t";

			Sleep(300);
		}
		cout << endl;
	}
#endif // MULTI

#ifdef PIFA
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << i * j;
		}
		cout << endl;

	}
#endif // PIFA


	




}