#include<stdio.h>
void rush01(int a, int b) {
	printf("\n");
	int i = 1;
	int j = 1;
	while (j <= b) {
		while (i <= a) {
			if (j == 1) {
				if (i == 1)
					printf("/");
				else if (i == a)
					printf("\\");
				else
					printf("*");
			}
			else if (j == b) {
				if (i == 1)
					printf("\\");
				else if (i == a)
					printf("/");
				else
					printf("*");
			}
			else {
				if (i == 1 || i == a)
					printf("*");
				else
					printf(" ");
			}
			i++;
		}
		i = 1;
		printf("\n");
		j++;
	}
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	rush01(a, b);
	return 0;
}