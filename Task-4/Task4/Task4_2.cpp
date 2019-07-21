#include "pch.h"
#include "Task4_2.h"
#include <cmath>
#include <iostream>
#include <iomanip>


using namespace std;

int factorial(int n)
{
	return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

double absolute_formula(int k, double x) {
	return fabs((pow(-1, k) / (factorial(k) * factorial(k + 1))) * pow(x / 2, 2 * k + 1));
}

double function2()
{
	double x = 0;
	cout << "Enter floating point number between 0 and 1 = ";
	cin >> x;
	if ((x > 0) && (x < 1))
	{
		double eps = pow(10, -6);
		int k = 1;
		double sum = 0;

		for (k; absolute_formula(k,x) > eps; k++)
		{
			sum += absolute_formula(k, x);
		
		}

		cout << "Count = " << k << endl;
		cout << "Summa = "<< sum << endl;
	}
	else {
		cout << "Wrong number!" << endl;
	}
		

	return 0;
}
