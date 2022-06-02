#include <stdio.h>

void initial_names(void);
void arrange_array(char names[13][10]);	// 배열 안에 있는 문자열 출력
void line_change(int n, char names[13][10]);

void line_up(char names[13][10]);
void line_down(char names[13][10]);
static char names[13][10];
static char destined_names[13][10] = { "computer", "fan", "clothes", "house", "paper", "egg", "dinner", "dawn", "blueberry", "soda", "ramen", "lunch", "dice" };


int main(void)
{
	printf("BUBBLE SORT\n");
	printf("-----------------------------------------------------------");
	printf("-----------------------------------------------------------\n");
	initial_names();
	// 입력된 문자열 출력
	printf("[Input String] : ");
	arrange_array(names);
	// 오름차순 
	printf("[Ascending order] : ");
	line_up(names);
	arrange_array(names);
	initial_names();	// names 초기화
	// 내림차순
	printf("[Descending order] : ");
	line_down(names);
	arrange_array(names);
	printf("-----------------------------------------------------------");
	printf("-----------------------------------------------------------\n");
	// "Enter 입력시 프로그램 종료
	while (1) {
		printf("Press \"Enter\" to quit the program...\n");
		char c = getchar();
		if (c == '\n') break;
	}
	return 0;
}


void arrange_array(char names[13][10])
{
	for (int i = 0; i <= 12; i++) {
		for (int j = 0; j <= 9; j++) {
			if (names[i][j] == 0)	break;
			printf("%c", names[i][j]);
		}
		if (names[i][0] == 0)	0;
		else if (i == 12)	break;
		else printf(", ");

	}
	printf("\n");
}

void line_up(char names[13][10])
{
	for (int i = 0; i <= 12; i++) {
		for (int j = 0; j <= 11 - i; j++) {
			if (names[j][0] > names[j + 1][0]) {
				line_change(j, names);
			}
			if (names[j][0] == names[j + 1][0]) {
				if (names[j][1] > names[j + 1][1]) line_change(j, names);	// 1.
				else if (names[j][1] == names[j + 1][1]) {
					if (names[j][2] > names[j + 1][2]) line_change(j, names);	// 2.
					else if (names[j][2] == names[j + 1][2]) {
						if (names[j][3] > names[j + 1][3]) line_change(j, names);	// 3.
						else if (names[j][3] == names[j + 1][3]) {
							if (names[j][4] > names[j + 1][4]) line_change(j, names);	// 4.
							else if (names[j][4] == names[j + 1][4]) {
								if (names[j][5] > names[j + 1][5]) line_change(j, names);	// 5.
								else if (names[j][5] == names[j + 1][5]) {
									if (names[j][6] > names[j + 1][6]) line_change(j, names);	// 6.
									else if (names[j][6] == names[j + 1][6]) {
										if (names[j][7] > names[j + 1][7]) line_change(j, names);	// 7.
										else if (names[j][7] == names[j + 1][7]) {
											if (names[j][8] > names[j + 1][8]) line_change(j, names);	// 8.
											else if (names[j][8] == names[j + 1][8]) {
												if (names[j][9] > names[j + 1][9]) line_change(j, names);	// 9.
												else 0;	// 자기 자신
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void line_down(char names[13][10])
{
	for (int i = 0; i <= 12; i++) {
		for (int j = 0; j <= 11 - i; j++) {
			if (names[j][0] < names[j + 1][0]) {
				line_change(j, names);
			}
			if (names[j][0] == names[j + 1][0]) {
				if (names[j][1] < names[j + 1][1]) line_change(j, names);	// 1.
				else if (names[j][1] == names[j + 1][1]) {
					if (names[j][2] < names[j + 1][2]) line_change(j, names);	// 2.
					else if (names[j][2] == names[j + 1][2]) {
						if (names[j][3] < names[j + 1][3]) line_change(j, names);	// 3.
						else if (names[j][3] == names[j + 1][3]) {
							if (names[j][4] < names[j + 1][4]) line_change(j, names);	// 4.
							else if (names[j][4] == names[j + 1][4]) {
								if (names[j][5] < names[j + 1][5]) line_change(j, names);	// 5.
								else if (names[j][5] == names[j + 1][5]) {
									if (names[j][6] < names[j + 1][6]) line_change(j, names);	// 6.
									else if (names[j][6] == names[j + 1][6]) {
										if (names[j][7] < names[j + 1][7]) line_change(j, names);	// 7.
										else if (names[j][7] == names[j + 1][7]) {
											if (names[j][8] < names[j + 1][8]) line_change(j, names);	// 8.
											else if (names[j][8] == names[j + 1][8]) {
												if (names[j][9] < names[j + 1][9]) line_change(j, names);	// 9.
												else 0;	// 자기 자신
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void line_change(int n, char names[13][10])
{
	char temp;
	for (int j = 0; j <= 9; j++) {
		temp = names[n][j];
		names[n][j] = names[n + 1][j];
		names[n + 1][j] = temp;
	}
}

void initial_names(void)
{
	for (int i = 0; i <= 12; i++) {
		for (int j = 0; j <= 9; j++) {
			names[i][j] = destined_names[i][j];
		}
	}
}