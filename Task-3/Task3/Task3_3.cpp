#include "pch.h"
#include "Task3_3.h"
#include <iostream>
#include <iomanip>

using namespace std;

void manipulators() {
	int length;
	char symbol;

	cout << "Length = ";
	cin >> length;
	cout << "Symbol = ";
	cin >> symbol;
	cout << "\n";

	for (int i = 0; i <= length / 2; i++) {

		cout << setw(length) << setfill(' ') << symbol << endl;
	}

	cout << setw(length * 2) << setfill(symbol) << symbol << endl;

	for (int i = 0; i <= length / 2; i++) {

		cout << setw(length) << setfill(' ') << symbol << endl;
	}
}