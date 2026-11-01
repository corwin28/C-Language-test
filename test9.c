#include<stdio.h>
int main() {
	int a = 0, i = 0;
	int sum = 0;
	scanf_s("%d", &a);
	while (a) {
		i = a % 10;
		a = a / 10;
		sum = sum + i;
	}
	printf("%d", sum);	
}