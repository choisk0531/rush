#include<stdio.h>
void rush01(int a, int b) {
	printf("\n");
	int i = 1;
	int j = 1;
	while (j <= b) {
		while (i <= a) {
			if (i == 1) {
				if (j == 1 || j == b)
					printf("A");
				else
					printf("B");
			}
			else if (i == a) {
				if (j == 1 || j == b)
					printf("C");
				else
					printf("B");
			}
			else {
				if (j == 1 || j == b)
					printf("B");
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