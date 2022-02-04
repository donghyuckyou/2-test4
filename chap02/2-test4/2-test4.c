/*
문제
입력화면
첫번째 계산할 값


*/
#include <stdio.h>
void main()
{
	int x,y,z,w;
	printf("첫번째 계산할 값을 입력하시오 => ");
	scanf_s("%d", &x);
	printf("두번째 계산할 값을 입력하시오 => ");
	scanf_s("%d", &y);
	printf("세번째 계산할 값을 입력하시오 => ");
	scanf_s("%d", &z);
	printf("네번째 계산할 값을 입력하시오 => ");
	scanf_s("%d", &w);

	printf("%d + %d + %d + %d = %d", x, y, z, w, x + y + z + w);
}