#include<stdio.h>
int main() {
	int money_20 = 0, money_10 = 0, money_5 = 0;
	for (money_20 = 2;money_20 <= 3;money_20++) {
		for (money_10 = 3;money_10 <= 5;money_10++) {
			money_5 = (100 - money_20 * 20 - money_10 * 10) / 5;
			if(money_5>0){
				printf("$20=%d,$10=%d,$5=%d\n", money_20, money_10, money_5);
			}
		}
	}
}