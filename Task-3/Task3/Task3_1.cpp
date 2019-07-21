#include "pch.h"
#include "Task3_1.h"
#include <stdio.h>

void dec() {
	int num;
	int count = 0;

	while (count <= 2) {
		printf("Enter DEC number = ");
		scanf("%d", &num);

		if (num < 100 && num >= 10) {
			printf("Your number is from 10 to 99\n");
			printf("Number in HEX = %x\n", num);
		}
		else if (num > -100 && num <= -10) {
			printf("Your number is from -10 to -99\n");
			printf("Number in HEX = %x\n", num);
			count++;
		}
		else {
			printf("Your number is not DEC!\n");
		}
	}
}