#include<stdio.h>
int a[4][4], k, allcnt;
int row[4][5], col[4][5];

void solve(int n)
{
	if (n == 16)
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++)
				printf("%d", a[i][j]);
			printf("\n");
		}
		printf("\n");
		allcnt++;
		for (int i = 0; i < 4; i++)
		{
			int cnt = 0, num = 0;
			for (int j = 0; j < 4; j++) {
				if (num < a[i][j]) {
					num = a[i][j];
					cnt++;
				}
			}
			if (cnt != 2)
				return;
		}
		for (int i = 0; i < 4; i++) {
			int cnt = 0, num = 0;
			for (int j = 4 - 1; j >= 0; j--) {
				if (num < a[i][j]) {
					num = a[i][j];
					cnt++;
				}
			}
			if (cnt != 2)
				return;
		}
		for (int i = 0; i < 4; i++) {
			int cnt = 0, num = 0;
			for (int j = 0; j < 4; j++) {
				if (num < a[j][i]) {
					num = a[j][i];
					cnt++;
				}
			}
			if (cnt != 2)
				return;
		}
		for (int i = 0; i < 4; i++) {
			int cnt = 0, num = 0;
			for (int j = 0; j < 4; j++) {
				if (num < a[j][i]) {
					num = a[j][i];
					cnt++;
				}
			}
			if (cnt != 2)
				return;
		}
		k++;
	}
	int p = n / 4, q = n % 4;
	for (int i = 1; i <= 4; i++) {
		if (!row[p][i] && !col[q][i]) {
			a[p][q] = i;
			row[p][i] = 1;
			col[q][i] = 1;
			solve(n + 1);
			a[p][q] = 0;
			row[p][i] = 0;
			col[q][i] = 0;
		}
	}
}






int main(void) {
	solve(0);
	printf("ÃÑ °æ¿ìÀÇ ¼ö: %d\n",allcnt);
}