#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

void function0() {

	setlocale(LC_CTYPE, "rus");

	cout << "�������� ������� �� 0 �� 360 �������� � ����� 15 ��������. \n" << endl;

	for (int x = 0; x <= 360; x+=15)
	{
		float sinx = sin(x);
		
		cout << "Sin " << x << " = " << sinx << "\n" << endl;

	}

}