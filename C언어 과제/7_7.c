#include<stdio.h>
/*2와 100사이에 있는 모든 소수(prime number)를 찾는 프로그램을 작성하라. 정수가 소수가 되려면 1과 자기 자신만을 약수로 가져야 한다.*/
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