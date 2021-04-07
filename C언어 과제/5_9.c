#include<stdio.h>
/*그리스 최초의 수학자이자 천문학자인 탈레스는 지팡이 하나로 피라미드의 높이를 재었다고 한다.
탈레스는 지팡이를 똑바로 땅에 세우고 지팡이를 움직여서 지팡이의 그림자와 피라미드의 그림자를 이치시켰다.
삼각형 ABC와 삼각형 ADE는 닮음꼴이므로 다음의 수식이 성리한다.
AC : AE = BC : DE
따라서 AC와 AE, BC를 안다면 DE를 계산할 수 있다. AC와 AE, BC를 입력하여서 DE를 구하는 프로그램을 작성하라.
입력되는 수치는 모두 실수로 한다.*/

void main(void) {
	double ac = 0, ae = 0, bc = 0, de = 0;
	printf("AC : AE = BC : DE 에서 AC,AE,BC의 길이를 입력하시오 : ");
	scanf_s("%lf %lf %lf", &ac ,&ae, &bc);
	de = ae * bc / ac;
	printf("DE의 길이는 %lf 이다", de);
}