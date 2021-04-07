#include<stdio.h>
/*1^2 + 2^2+ 3^2+...+n^2의 값을 계산하여 출력하여 보자*/
void main(void) {
	int n;
	int sum = 0;
	printf("n의 값을 입력하시오 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i * i;
	}
	printf("계산값은 %d입니다.", sum);
}