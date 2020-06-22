#include "pch.h"
#include "Header.h"

#include <stdio.h>
#include <Windows.h>
#include <math.h>
#include <iso646.h>

void output(int i_p, int f_p, char i[4], char f[3]) {
	char words_1[][15] = { "����", "��", "���", "������", "�'���", "�����", "��", "���", "���'���" };

	char words_2[][15] = { "������", "����������", "����������", "����������", "������������", "�'���������", "�����������",
	"���������", "����������", "���'���������" };

	char words_3[][15] = { "��������", "��������", "�����", "�'�������", "���������", "�������", "��������", "���'������" };

	if (i_p == 0 and f_p == 0) printf("");
	else {
		printf("%d.%d -> ", i_p, f_p);
		if (((int)i[0] - 48) > 0 and strlen(i) == 1) printf("%s ", words_1[(int)i[0] - 49]);

		if (strlen(i) == 2 and i_p < 20) {
			printf("%s ", words_2[i_p - 10]);
		}
		if (strlen(i) == 2 and i_p >= 20) {
			printf("%s ", words_3[(i_p - 20) / 10]);
			if (((int)i[1] - 48) > 0) printf("%s ", words_1[(int)i[1] - 49]);
		}
		if ((((int)i[0] - 48) > 4 and ((int)i[0] - 48) < 10) or (i_p > 9 and i_p < 20)) printf("������� ");
		else if ((((int)i[1] - 48) > 4 and ((int)i[1] - 48) < 10) or ((int)i[1] - 48) == 0) printf("������� ");
		else if (((int)i[1] - 48) == 1 or ((int)i[0] - 48) == 1) printf("������ ");
		else if ((((int)i[1] - 48) > 1 and ((int)i[1] - 48) < 5) or (((int)i[0] - 48) > 1 and ((int)i[0] - 48) < 5)) printf("����� ");

		if (f_p == 0) printf("");
		else {
			if (((int)f[0] - 48) > 0 and strlen(f) == 1) printf("%s ", words_1[(int)f[0] - 49]);

			if (strlen(f) == 2 and f_p < 20) {
				printf("%s ", words_2[f_p - 10]);
			}
			if (strlen(f) == 2 and f_p >= 20) {
				printf("%s ", words_3[(f_p - 20) / 10]);
				if (((int)f[1] - 48) > 0) printf("%s ", words_1[(int)f[1] - 49]);
			}
			if ((((int)f[0] - 48) > 4 and ((int)f[0] - 48) < 10) or ((int)f[0] - 48) == 0 or (f_p > 9 and f_p < 20)) printf("������ ");
			else if ((((int)f[1] - 48) > 4 and ((int)f[1] - 48) < 10) or ((int)f[1] - 48) == 0) printf("������ ");
			else if ((((int)f[1] - 48) == 1) or ((int)f[0] - 48) == 1) printf("������ ");
			else if ((((int)f[1] - 48) > 1 and ((int)f[1] - 48) < 5) or (((int)f[0] - 48) > 1 and ((int)f[0] - 48) < 5)) printf("������ ");
		}
	}
}