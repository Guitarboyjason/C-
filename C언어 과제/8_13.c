#include<stdio.h>
/*���Ϸ��� �� e�� �ڿ��α��� �ؼ��� ���ȴ�. �� ���� ������ ���� �Ŀ� ���Ͽ� �ٻ�ġ�� ���� �� �ִ�.
������ �ִ� ���丮�� ���� ����ϴ� �Լ� factorial()�� ȣ���Ͽ��� ���Ϸ��� ���� ����ϴ� ���α׷��� �ۼ��϶�.
e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!*/
long long factorial(int i);
void main(void) {
	double e =1;
	int n;
	printf("������ ����ұ�� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		e += 1.0 / factorial(i);
	}
	printf("���Ϸ��� ���� %lf�Դϴ�.",e);
}
long long factorial(int i) {
	long long result = 1;
	for (int j = 1; j <= i; j++)
		result *= j;
	return result;
}