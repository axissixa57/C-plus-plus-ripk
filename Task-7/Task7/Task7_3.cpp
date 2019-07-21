#include "pch.h"
#include "Task7_3.h"
#include <iostream>
#include <locale>

using namespace std;

void three() {
	setlocale(LC_CTYPE, "rus");
	char string[100] = "Z:\\816\\Аксёнов Е.Г\\Основы алгоритмизации и программирования\\Task7\\Task7.sln";
	char string1[50];
	int count = 0;

	int length_string = strlen(string);

	for (int i = length_string - 1; i >= 0; i--) 
	{
		if (string[i] == '\\')
		{
			for(int j = i - 1, k = 0; string[j] != '\\'; j--, k++)
			{ 
				string1[k] = string[j];
				count++;
			}
			break;
		}
	}
	
	for (int i = 0, j = count - 1; i < j; i++, j--)
	{
		int temp = string1[i];
		string1[i] = string1[j];
		string1[j] = temp;
	}

	cout << "Строка, содержащая полное имя файла = " << string << endl;
	cout << "Название последнего каталога = ";

	for (int i = 0; i < count; i++) {
		cout << string1[i];
	}
}

