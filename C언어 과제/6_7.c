#include<stdio.h>
/*사용자로부터 키를 입력받아서 표준 체중을 계산한 후에 사용자의 체중과 비교하여 저체중인지, 표준인지, 과체중인지를 
판단하는 프로그램을 작성하라. 표준 체중 계산식은 다음을 사용하라
표준체중 = (키-100) *0.9*/

void main(void) {
	int w=0, h=0;
	printf("체중과 키를 입력하시오 (키,체중): ");
	scanf_s("%d %d", &h, &w);
	float normal = (h - 100) * 0.9;
	if (normal < w) {
		printf("과체중입니다..");
	}
	else if (normal == w) {
		printf("표준체중 입니다.");
	}
	else
		printf("저체중입니다.");
}
