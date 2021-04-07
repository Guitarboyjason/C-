#include<stdio.h>
/*중첩 반복문을 사용하여서 다음과 같이 출력하는 프로그램을 작성하여 보자.*/
void main(void) {
	int n;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <=n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}