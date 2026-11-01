#include<stdio.h>
int main() {
	int a = 0, b = 0, s = 1;
	int i = 0;
	scanf_s("%d", &a);
	for (b = 1;b <= a;b++) {
		s = s * b;
		i = i + s;
	}
	printf("%d\n", i);
}