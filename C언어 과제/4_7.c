#include<stdio.h>
/*�����п��� ��������� E=mv^2/2.0���� ���ȴ�. ����ڷκ��� ����(m)�� �ӵ�(v)�� �޾Ƽ� �������(E)�� ����ϴ�
���α׷��� �ۼ��Ͽ� ����. ��� ������ double���� ����϶�.*/
void main(void) {
	double m = 0,v= 0;
	printf("����: ");
	scanf_s("%lf", &m);
	printf("�ӵ�: ");
	scanf_s("%lf", &v);
	double e = m * v * v / 2.0;
	printf("�������: %lf", e);
}