#include<stdio.h>
/*int형의 정수를 비트 연산자를 사용하여서 2의 보수(2's complement)로 변환하는 프로그램을 작성하라.
2의 보수는 먼저 전체 비트를 반전시킨 후에 1을 더하면 된다.*/
void main(void) {
	int n = 0;
	printf("정수를 인력하시오 : ");
	scanf_s("%d", &n);
	int result = ~n + 1;
	printf("2의 보수 : %d", result);
}