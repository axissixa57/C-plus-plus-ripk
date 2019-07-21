#include "pch.h"
#include "Task7_1.h"
#include <iostream>

using namespace std;

void one() {
	char string[80];

	cout << "Enter string = ";

	cin.getline(string, 80); 

	int length = strlen(string);

	for (int i = 0; i < length; i++)
	{
		if (isalpha(string[i]) == 0 && isdigit(string[i]) == 0 && isspace(string[i]) == 0)
		{
			string[i] = '_';
		}
		else if (isalpha(string[i]) && isupper(string[i]))
		{
			string[i] = tolower(string[i]);
		}
	}

	cout << "Result = " << string << endl;
}