// Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Task4_0.h"
#include "Task4_1.h"
#include "Task4_2.h"
#include "Task4_3.h"
#include "Task4_4.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int task = 0;

	while (task != -1) { 

		cout << "Enter the number of the task = ";
		cin >> task;

		switch (task) {
		case 0: {
			function0();
			break;
		}
		case 1: {
			function1();
			break;
		}
		case 2: {
			function2();
			break;
		}
		case 3: {
			function3();
			break;
		}
		case 4: {
			function4();
			break;
		}
		default:
			cout << "There is no such task here" << endl;
		}
	}
}
	
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
