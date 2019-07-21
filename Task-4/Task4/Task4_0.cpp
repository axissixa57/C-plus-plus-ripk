#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

void function0() {

	setlocale(LC_CTYPE, "rus");

	cout << "«начени€ синукса от 0 до 360 градусов с шагом 15 градусов. \n" << endl;

	for (int x = 0; x <= 360; x+=15)
	{
		float sinx = sin(x);
		
		cout << "Sin " << x << " = " << sinx << "\n" << endl;

	}

}