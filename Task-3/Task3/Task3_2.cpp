#include "pch.h"
#include "Task3_2.h"
#include <iostream>
#include <cmath>

using namespace std;

double formula(int a, int b) {
	double part1 = 5 * (sin(pow(b, 3)) * sqrt(a + 23)) - exp(b);
	double part2 = sqrt(pow(sin(a), 2) + pow(cos(b), 2)) + a / (2 * b);
	return part1 / part2;
}