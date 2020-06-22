#include "pch.h"
#include "Header.h"

#include <stdio.h>
#include <Windows.h>

void main(void) {
	SetConsoleOutputCP(1251);

	int int_part, float_part;

	printf("Введіть суму у гривнях (приклад: 12.50): ");
	scanf_s("%d.%d", &int_part, &float_part);
	while (int_part < 0) {
		printf("Суму вказано невірно! Введіть знов: ");
		scanf_s("%d.%d", &int_part, &float_part);
	}

	char str[4], fl[3];
	sprintf(str, "%d", int_part);
	sprintf(fl, "%d", float_part);

	output(int_part, float_part, str, fl);
}