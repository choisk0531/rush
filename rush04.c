#include<stdio.h>
void rush04(int a, int b) {
	printf("\n");
	int i = 1;
	int j = 1;
	while(j<=b){
		while(i<=a) {
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
	rush04(a, b);
	return 0;
}
