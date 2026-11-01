#include<stdio.h>
int main() {
	int a = 0, b = 0, i = 1;
	int n = 0, m = 0;
	scanf_s("%d", &n);
	m = 2 * n - 1;
	for (a = 1;a <= m;a++) {
		if (a <= n) {
			for (i = 2;i <= a;i++) {
				printf(" ");
			}
			b = m - 2 * (a - 1);
			for (i = 1;i <= b;i++) {
				printf("*");
			}
		}
		else {
			for (i = 2*n-a-1;i >= 1;i--) {
				printf(" ");
			}
			b = 2 * a - m;
			for (i = 1;i <= b;i++) {
				printf("*");
			}
		}
		printf("\n");
	}
}