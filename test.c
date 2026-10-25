#include<stdio.h>
int main() {
	int a = 0, b = 0;//定义两个新变量并赋初值
	printf("请输入两个整数:\n");
	scanf_s("%d%d", &a, &b);//用户输入两个整数
	if (b == 0) {
		printf("0不能做除数,尝试换个数吧!\n");//确保除数不为0
	}
	else {
		printf("%d+%d=%d\n", a, b, a + b);//输出两个整数的和
		printf("%d-%d=%d\n", a, b, a - b);//输出两个整数的差
		printf("%d*%d=%d\n", a, b, a * b);//输出两个整数的积
		float t = a;//将整数类型强制转换为浮点型
		printf("%.0f/%d=%.2f\n", t, b, t / b);//输出两个整数的商并保留两位小数
	}

}