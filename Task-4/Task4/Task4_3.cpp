#include "pch.h"
#include "Task4_3.h"
#include <iostream>

using namespace std;

void function3() {
	char word[80];

	cout << "Enter a string = ";
	cin >> word;

	int length = strlen(word);

	for (int i = 0, j = length - 1; i < j; i++, j--) {
		int temporary = word[i];
		word[i] = word[j];
		word[j] = temporary;
	}

	cout << word << endl;
}