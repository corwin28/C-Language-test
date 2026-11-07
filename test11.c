#include<stdio.h>
int main() {
	int a = 2, n = 0, flag = 1, b = 0;
	int first = 1;
	scanf_s("%d%d", &n, &b);
	for (n = n;n <= b;n++) {
		flag = 1;
		a = 2;
		if (n < 2) {
			flag = 0;
		}
		else {
			do {
				if (n % a == 0 && n != 2) {
					flag = 0;
					break;
				}
				a++;
			} while (a < n);
		}
		if (flag == 1) {
			if (first == 0) 
				printf(",");

				printf("%d", n);
				first = 0;			
		}
	}
}