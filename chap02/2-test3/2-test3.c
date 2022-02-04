/*
x=100
y=200
z=x+y

출력결과
x = 100
y = 200
100 + 200 =300
*/

#include <stdio.h>
int main(void)
{
	int x = 100;
	int y = 200;
	int z = x + y;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("%d + %d = %d\n", x,y,z);
	return 0;
}
