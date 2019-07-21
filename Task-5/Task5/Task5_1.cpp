#include "pch.h"
#include "Task5_1.h"
#include <iostream>

using namespace std;

void input_array(int arr[], int length) {

	for (int i = 0; i < length; i++) {
		cout << " " << arr[i] << " ";
	}
	cout << endl;
}

void function1() {
	int array[10];
	int M[10];
	int L[10];
	int length_L = 0;
	int length_M = 0;

	cout << "Enter the values of the array = " << endl;

	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}

	for (int i = 0, j = 0, k = 0; i < 10; i++)
	{
		if ((array[i] % 2) == 0) {
			L[j] = array[i];
			j++;
			length_L++;
		}
		else {
			M[k] = array[i];
			k++;
			length_M++;
		}
	}

	cout << "Array L = ";
	input_array(L, length_L);
	cout << "The size of L = " << length_L << endl;
	cout << "Array M = ";
	input_array(M, length_M);
	cout << "The size of M = " << length_M << endl;
}



