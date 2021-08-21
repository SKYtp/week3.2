#include<stdio.h>
int main() {
	int x, i, j;
	printf("Enter number : ");
	scanf_s("%d", &x);
	printf("-----------------------------\n");
	j = 1;
	for (i = 1; i <= x; i++) {
		while (j <= x) {
			printf("*");
			j++;
		}
		j = 1;
		printf("\n");
	}
	return 0;
}