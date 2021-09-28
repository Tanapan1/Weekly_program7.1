#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int i = 0;
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	while (1) {
		if (num >= 0) {
			if ((2 * i) == num) { printf("Even number"); break; }
			else if ((2 * i) > num) { printf("Odd number"); break; }
		}
		else {
			if ((-2 * i) == num) { printf("Even number"); break; }
			else if ((-2 * i) < num) { printf("Odd number"); break; }
		}
		i++;
	}
	return 0;

}