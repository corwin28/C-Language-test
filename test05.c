#include<stdio.h>
int main() {
	double high = 100;
	double s = 0;
	int time = 0;
	for (time = 1;time <= 10;time++) {
		s = s + 3.0 * high / 2;
		high = high / 2;
	}
	printf("%lf %lf", s, high);
}