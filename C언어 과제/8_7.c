#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/*�տ��� �ۼ��� b_rand() �Լ��� �̿��Ͽ� ������ ���� ������ ������ �ùķ��̼� �Ͽ� ����.
��ǻ�Ͱ� ������ ������ ����ڴ� �յڸ� ���Ѵ�. ��ǻ�ʹ� b_rand()�� �̿��Ͽ� ������ ������ 1�̸�
������ �ո����� �����ϰ� 0�̸� ������ �޸����� �����Ѵ�.*/
int b_rand();
void main(void) {
	char conti = 'y';
	int n;
	while(1) {
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		scanf_s("%d", &n);
		if (b_rand() == n) {
			printf("�¾ҽ��ϴ�.");
		}
		else
			printf("Ʋ�Ƚ��ϴ�.");
		printf("����Ͻðڽ��ϱ�?");
		scanf_s(" %c", &conti);
		if (conti == 'n')
			break;
	}
}
int b_rand() {
	srand((unsigned)time(NULL));
	return rand()%2;
}