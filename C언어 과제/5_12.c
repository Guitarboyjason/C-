#include<stdio.h>
/*비트 이동 연산을 이용하여 문자 4개를 받아서 하나의 unsigned int형의 변수 안에 저장하는 프로그램을 작성하라.
첫 번째 문자는 비트0부터 비트7까지에 저장되고 두번째 문자는 비트 8부터 비트 15까지, 세번째문자는 비트 16에서 비트23까지,
네번째 문자는 비트 24부터 비트31까지에 저장된다. 결과로 생성되는 정수값은 16진수로 출력하도록 한다. 
비트 이동 연산과 비트 OR 연산을 사용하라.*/
void main(void) {
	char a, b, c,d;
	printf("첫번째 문자: ");
	scanf_s(" %c", &a);
	printf("두번째 문자: ");
	scanf_s(" %c", &b);
	printf("세번째 문자: ");
	scanf_s(" %c", &c);
	printf("네번째 문자: ");
	scanf_s(" %c", &d);
	
	unsigned int result = a | (b << 8) |(c << 16)| (d << 24);
	printf("%x", result);
}