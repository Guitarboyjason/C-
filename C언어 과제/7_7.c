#include<stdio.h>
/*2�� 100���̿� �ִ� ��� �Ҽ�(prime number)�� ã�� ���α׷��� �ۼ��϶�. ������ �Ҽ��� �Ƿ��� 1�� �ڱ� �ڽŸ��� ����� ������ �Ѵ�.*/
void main(void) {
	for (int i = 2; i <= 100; i++) {
		int k = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0)
				break;
			if (j == i - 1)
				k = 1;
		}
		if (k == 1 || i == 2) {
			printf("%d ", i);
		}

	}
}