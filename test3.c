#include<stdio.h>
int main() {
	int i = 2, n = 0;
	int flag = 0, m = 0;
	int c = 2;
	scanf_s("%d", &n);
	while (i < n) {
		flag = i;
        m = 0;
		while (flag) {
			m = m * 10 + flag % 10;
			flag = flag / 10;
		}
        if (i != m) {
            i++;
            continue;
        }
        flag = 1;
        if (m <= 1){
            flag = 0;
        }
        else if (m == 2) {
            flag = 1;
        }
        else{
            c = 2;
            do{
                if (m % c == 0){
                    flag = 0;
                    break;
                }
                c++;
            } while (c * c <= m);
        }
        if (flag == 1) {
            printf("%d\n", m);
        }
        i++;
	}
}