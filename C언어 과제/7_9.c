#include<stdio.h>
/*(1+2+3+...+n)�� 10000�� ���� �����鼭 ���� ū ���� �� ���� n�� ���� ���϶�*/
void main(void) {
	int sum = 0;
	int i = 1;
	for (i = 1; i < 10000; i++) {
		if (sum <= 10000)
			sum += i;
		else {
			sum -= i - 1;
			i -= 2;
			break;
		}

	}
	printf("1���� %d������ ���� %d�Դϴ�.", i, sum);
}