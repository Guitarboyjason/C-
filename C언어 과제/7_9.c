#include<stdio.h>
/*(1+2+3+...+n)가 10000을 넘지 않으면서 가장 큰 값과 그 때의 n의 값을 구하라*/
void main(void) {
	int sum = 0;
	int i = 1;
	for (i = 1; i < 10000; i++) {
		if (sum <= 10000)
			sum += i;
		else {
			sum -= i - 1;
			i -= 2;
			break;
		}

	}
	printf("1부터 %d까지의 합이 %d입니다.", i, sum);
}