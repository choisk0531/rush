#include<stdio.h>
void rush04(int a, int b) {
	printf("\n");
	int i = 1;
	int j = 1;
	while (j <= b){
		while (i <= a) {
			if ((i == 1 && j == 1)|| (i == a && j == b))
				printf("A");
			else if ((i == a && j == 1) || (i == 1 && j == b))
				printf("C");
			else if(i == 1 || i == a || j ==1  || j == b)
				printf("B");
			else
				printf(" ");
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
