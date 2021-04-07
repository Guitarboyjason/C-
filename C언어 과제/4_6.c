#include<stdio.h>
/*물리학에서 운동에너지는 E=mv^2/2.0으로 계산된다. 사용자로부터 질량(m)과 속도(v)를 받아서 운동에너지(E)를 계산하는
프로그램을 작성하여 보자. 모든 변수는 double형을 사용하라.*/
void main(void) {
	double m, v;
	double e = m * v * v / 2.0;
	printf("질량: ");
	scanf_s("%lf", &m);
	printf("속도: ");
	scanf_s("%lf", &v);
	printf("운동에너지: %lf", e);
}