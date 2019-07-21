#include "pch.h"
#include "Task5_0.h"
#include <iostream>

using namespace std;

void zero() {

	int const length_array = 10;
	int random_array[length_array];

	cout << "Enter random int numbers:" << endl;

	for (int i = 0; i < length_array; i++)
	{
		cin >> random_array[i];
	}

	cout << "Your numbers:" << endl;

	for (int i = 0; i < length_array; i++)
	{
		cout << random_array[i] << " ";
	}

	cout << endl;

	
	for (int j = 1; j < (length_array - 1); j++) { // ищем самое наименьшее число и смещаем его вправо в массиве

		if (random_array[j] < random_array[j + 1]) { 

			int temp = random_array[j];
			random_array[j] = random_array[j + 1];
			random_array[j + 1] = temp;

		}

	}
	
	for (int i = 0; i < length_array; i++)
	{
		cout << random_array[i] << " ";
	}

	cout << endl;

	int tem1 = random_array[0];
	random_array[0] = random_array[length_array - 1];
	random_array[length_array - 1] = tem1;

	for (int i = 0; i < length_array; i++)
	{
		cout << random_array[i] << " ";
	}
	
}