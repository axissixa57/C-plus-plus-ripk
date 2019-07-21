#include "pch.h"
#include "Task6_3.h"
#include <iostream>
#include <locale>

using namespace std;

void three() {
	setlocale(LC_CTYPE, "rus");
	srand(time(0));

	int* random_arr = new int[100];
	int summ = 0;
	int size = 0;
	int sto = 100;
	int* pi;
	int* pj;

	cout << "Generate array with random numbers." << endl << endl;

	for (int* pi = random_arr; pi < random_arr + 100; pi++)
	{
		*pi = -50 + rand() % 100;
		cout << *pi << " ";
	}

	cout << endl << endl;
	cout << "Если каждое абсолютное число отрицательной последовательности больше " << endl;
	cout << "абсолютного среднего значения последовательности, то удаляем его" << endl;

	for (pi = random_arr; pi < (random_arr + 100) - 1; pi++)
	{
		if (*pi < 0 && *(pi + 1) < 0)
		{
			for (pj = pi; *pj < 0 && pj < (random_arr + 100); pj++)
			{
				summ += *pj;
				size++;
			}

			for (int* pk = pi; *pk < 0 && pk < (random_arr + 100); pk++)
			{
				if (abs(*pk) >= abs(summ / size))
				{
					*pk = 100; // для того чтобы удалить потом
				}
			}

			pi = pj; // начинаем отсчёт после последовательности
			summ = 0;
			size = 0;
		}
	}

	cout << endl;

	for (int* pi = random_arr; pi < random_arr + 100; pi++)
	{
		if (*pi != 100)
		{

		}
		else
		{
			sto--;
		}
	}

	int* reserv = new int[sto];

	for (int* pi = random_arr, * pj = reserv; pi < random_arr + 100; pi++) // if there is 100 in the random_number - delete it
	{
		if (*pi != 100)
		{
			*pj = *pi;
			pj++;
		}
	}

	for (int* pi = reserv; pi < reserv + sto; pi++)
	{
		cout << *pi << " ";
	}

	delete[] random_arr;
	delete[] reserv;
}