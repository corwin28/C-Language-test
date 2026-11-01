//输入两个数据，求最大公约数和最小公倍数。
#include<stdio.h>
#include<math.h>
int main() {
	int a = 0, b = 0, rem = 0;
	printf("请输入两个数据:\n");
	scanf_s("%d%d", &a, &b);
	int max = a * b;
	while (b) {
		rem = a % b;
		a = b;
		b = rem;
	}
	printf("最大公约数:%d\n", a);
	rem = max / a;
	printf("最小公倍数:%d\n", rem);
}