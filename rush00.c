#include<stdio.h>
void rush00(int a, int b) {
	printf("\n");
	int i = 1;
	int j = 1;
	while (j <= b) {
		while (i <= a) {
			if (j == 1 || j == b) {
				if (i == 1 || i == a)
					printf("o");
				else
					printf("-");
			}
			else {
				if (i == 1 || i == a)
					printf("|");
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
	rush00(a, b);
	return 0;
}