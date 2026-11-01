#include<stdio.h>
int main() {
	int a = 0, b = 0;
	int n = 1;
	for (a = 1;a <= n;a++) {
		for (b = 1;b <= n;b++) {
			printf("%d * %d=%2d\t", b, n, b * n);
		}
		if (a == n) {
			n++;
			printf("\n");
		}
		if (n == 10) {
			break;
		}
	}
}