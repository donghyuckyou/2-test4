/*문제
정수형 500,200을 저장하고 사칙연산값을 출력
실수형 12.345와 67.898를 저장하고 더하기와 빼기를 출력

결과
700
300
100000
2

80.243 (%5.3f)
-55.553 (%5.3f)

*/

#include <stdio.h>
void main()
{
	int a = 500;
	int b = 200;
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	float c = 12.345;
	float d = 67.898;
	printf("\n%5.3f\n", c + d);
	printf("%5.3f\n", c - d);
}