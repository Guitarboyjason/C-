#include<stdio.h>
/*1^2 + 2^2+ 3^2+...+n^2�� ���� ����Ͽ� ����Ͽ� ����*/
void main(void) {
	int n;
	int sum = 0;
	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i * i;
	}
	printf("��갪�� %d�Դϴ�.", sum);
}