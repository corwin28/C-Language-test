#include<stdio.h>
int main() {
	int hour = 0, minute = 0, second = 0;//定义新变量并赋初值
	printf("Enter total seconds: ");
	scanf_s("%d", &second);//用户输入从午夜开始的秒数
	if (second >= 86400) {
		second = second % 86400;//判断是否满一天(86400秒)
	}
	hour = second / 3600;//计算输入时长满几个小时(只取整数)
	minute = (second % 3600) / 60;//计算剩余时长满几分钟(只取整数)
	second = second % 60;//计算剩余时长
	printf("Time: %d:%.2d:%.2d\n", hour, minute, second);//输出等价的时间
}