#include<stdio.h>
/*������ ���� ���ǵǴ� �Լ��� �Լ����� ����Ͽ� ����. ����ڷκ��� x���� �Է¹޾Ƽ�
�Լ����� ����Ͽ� ȭ�鿡 ����Ѵ�. x�� �Ǽ��̴�.
f(x) = x^3 - 9x + 2 (x<=0)
	= 7x + 2 (x>0)*/
void main(void) {
	float x;
	printf("x�� ���� �Է��Ͻÿ� :");
	scanf_s("%f", &x);
	float result;
	if (x >= 0) {
		result = 7 * x + 2;
	}
	else
		result = x * x * x - 9 * x + 2;
	printf("f(x)�� ���� %f", result);
}