#include<stdio.h>
/*int���� ������ ��Ʈ �����ڸ� ����Ͽ��� 2�� ����(2's complement)�� ��ȯ�ϴ� ���α׷��� �ۼ��϶�.
2�� ������ ���� ��ü ��Ʈ�� ������Ų �Ŀ� 1�� ���ϸ� �ȴ�.*/
void main(void) {
	int n = 0;
	printf("������ �η��Ͻÿ� : ");
	scanf_s("%d", &n);
	int result = ~n + 1;
	printf("2�� ���� : %d", result);
}