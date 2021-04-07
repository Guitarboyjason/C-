#include<stdio.h>
/*사용자로부터 하나의 문자를 입력받아서 문자가 'R'이면 "Rectangle"이라고 출력한다.
'T'이면 "Triangle", 'C'이면 "Circle"이라고 출력하는 프로그램을 작성한다. 그 외의 문자가 들어오면 "Unknown"이라고 출력한다.*/

void main(void) {
	char c;
	printf("문자를 입력하시오: ");
	scanf_s("%c", &c);
	if (c == 'r') {
		printf("Rectangle");
	}
	else if (c == 't') {
		printf("Triangle");
	}
	else if (c == 'c') {
		printf("Circle");
	}
	else
		printf("Unknown");
}