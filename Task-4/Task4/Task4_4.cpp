#include "pch.h"
#include "Task4_4.h"
#include <iostream>
#include <clocale>

using namespace std;

void function4() {
	setlocale(LC_CTYPE, "rus");
	const int length = 10;
	int x[length];
	int simple[length];
	int simple_size = 0;
	int dontsimple[length];

	cout << "Введите любые целые числа.\n";

	for (int i = 0; i < length; i++) {
		cin >> x[i];
	}

	cout << "Ваши числа.\n";

	for (int i = 0; i < length; i++) {
		cout << x[i] << " ";
	}

	cout << "\n";

	for (int i = 0, j = 0, k = 0; i < length; i++) {
		
		if (x[i] % 2 == 0 || x[i] % 3 == 0) {
			dontsimple[j] = x[i];
			j++;
		}
		else if (x[i] < 0) {
			simple[k] = x[i];
			k++;
			simple_size++;
		}

	}

	cout << "Все простые числа.\n";

	for (int i = 0; i < simple_size; i++) {
		cout << simple[i] << " ";
	}

	cout << "\nКол-во простых чисел = " << simple_size << endl;
	
}