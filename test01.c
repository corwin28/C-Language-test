#include<stdio.h>
int main() {
	int a = 0, A = 0, B = 0, b = 0;
	char ch=getchar();
	while (ch != '\n' && ch != EOF) {
		if (ch >= 'a' && ch <= 'z') {
			a++;
		}
		else if (ch >= 'A' && ch <= 'Z') {
			A++;
		}
		else if (ch >= '0' && ch <= '9') {
			b++;
		}
		else {
			B++;
		}
		ch = getchar();
	}
	printf("%d %d %d %d", A, a, b, B);
}
