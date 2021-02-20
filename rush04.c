#include<stdio.h>
void rush04(int a, int b) {
	printf("\n");
	for (int j = 1; j <= b; j++) {
		for (int i = 1; i <= a; i++) {
			if (j == 1) {
				if (i == 1)
					printf("A");
				else if (i == a)
					printf("C");
				else
					printf("B");
			}
			else if (j == b) {
				if (i == 1)
					printf("C");
				else if (i == a)
					printf("A");
				else
					printf("B");
			}
			else {
				if (i == 1)
					printf("B");
				else if (i == a)
					printf("B");
				else
					printf(" ");
			}
		}
			printf("\n");
	}
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	rush04(a, b);
	return 0;
}