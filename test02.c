#include<stdio.h>
int main() {
	int a = 0, n = 0;
	int flag = 1;
	int i = 0;
	for (n = 200; n <= 500;n++) {
		flag = 1;
		a = 2;
		do {
			if (n % a == 0) {
				flag = 0;
				break;
			}
			a++;
		} while (a * a <= n);
		if (flag == 1) {
			printf("%d ", n);
			i++;
			if (i % 10 == 0) {
				printf("\n");
			}
		}
			}
}