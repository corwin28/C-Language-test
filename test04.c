#include<stdio.h>
int main() {
	int n = 0, sum = 0;
	for (n = 1;n <= 1000;n++) {
		sum = 0;
		for (int i = 1;i < n;i++) {
			if (n % i == 0) {
				sum += i;
			}
		}
		if (sum == n) {
			printf("%d\n",n);
		}
	}
}