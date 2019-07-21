#include "pch.h"
#include "Task4_1.h"
#include <iostream>

using namespace std;

void function1() {
	int num;
	cout << "Enter a four-digit natural number = ";
	cin >> num;

	if (num > 999 && num < 10000) {

		int one = num % 10;
		cout << one << endl;
		int two = (num / 10) % 10;
		cout << two << endl;
		int three = (num / 100) % 10;
		cout << three << endl;
		int four = (num / 1000);
		cout << four << endl;
		
		if (one == two && two == three && three == four && four == one) {
			cout << "True" << endl;
		}
		else {
			cout << "False" << endl;
		}

	}
	else {
		cout << "You have to write a four-digit natural number!" << endl;
	}
}