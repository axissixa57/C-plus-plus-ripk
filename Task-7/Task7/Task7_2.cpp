#include "pch.h"
#include "Task7_2.h"
#include <iostream>
#include <clocale>

using namespace std;

void two() {
	setlocale(LC_CTYPE, "rus");

	char S[80];
	char S1[80];
	char SS1[160];
	int n = 0;

	cout << "Enter string S (max length 80 symbols) = "; 

	cin.getline(S, 80);
	int lengthS = strlen(S);

	cout << "Enter string S1 (max length 80 symbols) = "; 

	cin.getline(S1, 80);
	int lengthS1 = strlen(S1);

	int sum = lengthS + lengthS1;

	cout << "Введите n-номер места вставки подстроки S1 в строку S [0, последняя буква строки S] = ";
	cin >> n;

	int temp = n; // для продолжения отсатка строки

	if (n > lengthS)
	{
		cout << "Место вставки превышает длину строки S!";
	}
	else
	{
		for (int i = 0; i < sum; i++)
		{
			SS1[i] = S[i];
		}

		for (int i = 0; i < lengthS1; i++)
		{
			SS1[n] = S1[i];
			n++; // последнее число переносится в следующий цикл
		}

		for (; n < sum; n++)
		{
			SS1[n] = S[temp];
			temp++;
		}

		for (int i = 0; i < sum; i++)
		{
			cout << SS1[i];
		}
	}
	
}