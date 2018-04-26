// odnomern_matrica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include "conio.h"

using namespace std;

const int MAS_LEN = 5;

class CMassive
{
private:
	int M[MAS_LEN];

public:
	void SetMassive();
	void Sort();
	void PrintMassive() const;
};

void CMassive::SetMassive()
{
	int i = 0;
	for (i = 0; i <= MAS_LEN - 1; i++)
	{
		cout << "Введите элемент: ";
		cin >> M[i];
	}
};

void CMassive::PrintMassive() const
{
	cout << "Отсортированный массив:" << endl;

	int i = 0;
	for (i = 0; i <= MAS_LEN - 1; i++)
	{
		cout << M[i] << endl;
	};
};

void CMassive::Sort()
{
	int i = 0, j = 0;
	int temp = 0;

	for (i = 0; i <= MAS_LEN - 2; i++)
	{
		for (j = i + 1; j <= MAS_LEN - 1; j++)
		{
			if (M[i]<M[j])
			{
				temp = M[i];
				M[i] = M[j];
				M[j] = temp;
			};
		};
	};
};



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "");

	CMassive *Massive = new CMassive();

	Massive->SetMassive();
	Massive->Sort();
	Massive->PrintMassive();

	getch();
	return 0;

}

