#include<stdio.h>
/*�츮���󿡼� ���� ���Ǵ� ������ ������ ���� �������ͷ� ȯ���ϴ� ���α׷��� �ۼ��϶�.
���⼭ 1���� 3.3m^2�̴�. �������� �ڷ����� � ���� �����ϴ� ���� ������?
��ȣ����� �̿��Ͽ� 1��� �������͸� ��Ÿ�����.*/

void main(void) {
	int p=0;
	const double SQMETER_PER_PYEONG = 3.3058;
	printf("���� �Է��ϼ��� :");
	scanf_s("%d", &p);
	double result = p * SQMETER_PER_PYEONG;
	printf("%lf�������Դϴ�.", result);
}