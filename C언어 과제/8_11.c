#include<stdio.h>
#include<math.h>
/*�� �� ������ �Ÿ��� ����ϴ� �Լ��� �ۼ��Ͽ� ����. 2���� �������� �� ��(x1,y1)�� (x2, y2)������ �Ÿ��� ����ϴ�
get_distance(double x1, double y1, double x2, double y2)�� �ۼ��϶�. ������ ���� �� �� ������ �Ÿ��� ����ϴ�
������ ����϶�. �������� sqrt() ���̺귯�� �Լ��� ����϶�.*/
void main(void) {
	double x1, y1, x2, y2;
	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ� : (x, y) ");
	scanf_s("%lf %lf", &x1, &y1);
	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ� : (x, y) ");
	scanf_s("%lf %lf", &x2, &y2);

	double result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	printf("���� ������ �Ÿ��� %lf�Դϴ�.",result);

}
