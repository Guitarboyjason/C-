#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/*앞에서 작성한 b_rand() 함수를 이용하여 간단한 동전 던지기 게임을 시뮬레이션 하여 보자.
컴퓨터가 동전을 던지고 사용자는 앞뒤를 말한다. 컴퓨터는 b_rand()를 이용하여 생성된 난수가 1이면
동전의 앞면으로 간주하고 0이면 동전의 뒷면으로 간주한다.*/
int b_rand();
void main(void) {
	char conti = 'y';
	int n;
	while(1) {
		printf("앞면 또는 뒷면(1 또는 0): ");
		scanf_s("%d", &n);
		if (b_rand() == n) {
			printf("맞았습니다.");
		}
		else
			printf("틀렸습니다.");
		printf("계속하시겠습니까?");
		scanf_s(" %c", &conti);
		if (conti == 'n')
			break;
	}
}
int b_rand() {
	srand((unsigned)time(NULL));
	return rand()%2;
}