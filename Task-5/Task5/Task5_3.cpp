#include "pch.h"
#include "Task5_3.h"
#include <iostream>
#include <ctime>
#include <cmath>
#include <clocale>

using namespace std;

void function2() {
	setlocale(LC_CTYPE, "rus");

	const int length_array = 100;
	srand(time(0));
	int random_number[length_array];
	int reserv[length_array];
	int sto = 100;
	int summ = 0;
	int size = 0;
	int i;
	int j;

	cout << "Generate array with random numbers." << endl << endl;

	for (int i = 0; i < length_array; i++) 
	{
		random_number[i] = -50 + rand() % 100;
		cout << random_number[i] << " ";
	}

	cout << endl << endl;
	cout << "Если каждое абсолютное число отрицательной последовательности больше " << endl; 
	cout << "абсолютного среднего значения последовательности, то удаляем его" << endl;

	for (i = 0; i < length_array - 1; i++)
	{
		if (random_number[i] < 0 && random_number[i + 1] < 0)
		{
			for (j = i; random_number[j] < 0 && j < (length_array); j++)
			{
				summ += random_number[j];
				size++;
			}

			for (int k = i; random_number[k] < 0 && k < (length_array ); k++)
			{
				if (abs(random_number[k]) >= abs(summ / size))
				{
					random_number[k] = 100; // для того чтобы удалить потом
				}
			}

			i = j; // начинаем отсчёт после последовательности
			summ = 0;
			size = 0;
		}
	}

	cout << endl;

	for (int i = 0, j = 0; i < length_array; i++) // if there is 100 in the random_number - delete it
	{
		if (random_number[i] != 100)
		{
			reserv[j] = random_number[i];
			j++;
		}
		else
		{
			sto--;
		}
	}

	for (int i = 0; i < sto; i++)
	{
		cout << reserv[i] << " ";
	}
}