#include<stdio.h>
/*����ڷκ��� �ϳ��� ���ڸ� �Է¹޾Ƽ� ���ڰ� 'R'�̸� "Rectangle"�̶�� ����Ѵ�.
'T'�̸� "Triangle", 'C'�̸� "Circle"�̶�� ����ϴ� ���α׷��� �ۼ��Ѵ�. �� ���� ���ڰ� ������ "Unknown"�̶�� ����Ѵ�.*/

void main(void) {
	char c;
	printf("���ڸ� �Է��Ͻÿ�: ");
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