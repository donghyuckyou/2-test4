/*
scanf() == scanf_s()
- 표준입출력중에 입력하는 키보드 자료 입력
- 입력변수지정하고 scanf()를 사용하려면 &기호를 붙인다.
- C에서는 전통적으로 값을 입력 받기 위해 scanf()함수를 사용 
- 마이크로소프트에서 IDE를 제공한 비주얼스튜디오에서는 scanf_s()를 권장한다.
- scanf()함수를 사용하려면 프로그램 전처리에 #define _CRT_SECURE_NO_WARNINGS 을 실행해줘야한다.
- scanf_s()함수의 단점은 Visual C++에서만 사용할 수 있으며 C컴파일러는 인식을 하지 못한다.
- 기존함수이름에 _s가 붙은 새로운 함수는 보안이 한층 강화 된 개선된 함수

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int x;
	int y;
	scanf("%d %d", &x, &y);
	int z = x + y;
	printf("%d", z);
}