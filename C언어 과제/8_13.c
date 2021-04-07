#include<stdio.h>
/*오일러의 수 e는 자연로그의 밑수로 사용된다. 이 값은 다음과 같은 식에 의하여 근사치를 구할 수 있다.
본문에 있는 팩토리얼 값을 계산하는 함수 factorial()을 호출하여서 오일러의 수를 계산하는 프로그램을 작성하라.
e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!*/
long long factorial(int i);
void main(void) {
	double e =1;
	int n;
	printf("어디까지 계산할까요 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		e += 1.0 / factorial(i);
	}
	printf("오일러의 수는 %lf입니다.",e);
}
long long factorial(int i) {
	long long result = 1;
	for (int j = 1; j <= i; j++)
		result *= j;
	return result;
}