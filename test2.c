#include<stdio.h>
#include<stdlib.h>
int main() {
	srand((unsigned)time(NULL));
	int number_1 = rand() % 6 + 1;
	int number_2 = rand() % 6 + 1;
	printf("第一个骰子的点数是:%d\n", number_1);
	printf("第二个骰子的点数是:%d\n", number_2);
	printf("这两个骰子的点数之和是:%d\n", number_1 + number_2);
}