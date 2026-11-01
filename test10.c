#include<stdio.h>
int main() {
	float a = 0;
	float max = 0;
	while (1) {
		printf("Enter number :");
		scanf_s("%f", &a);
		if (a == 0) {
			break;
		}
		if (max < a) {
			max = a;
		}
	}
	printf("The largest number is %.2f", max);
}