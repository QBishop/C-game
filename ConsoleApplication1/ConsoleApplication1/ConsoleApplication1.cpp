#include <stdio.h>

int main()
{
	int a = 12;
	int b = 5;
	printf("%d 와 %d 의 합은 %d 입니다.",a,b,a+b);
	printf("%d 를 %d 로 빼면 %d 입니다.", a, b, a-b);
	printf("%d 와 %d 를 곱하면 %d 입니다.", a, b, a*b);
	printf("%d 를 %d 를 나누면 %d 입니다. 나머지는 %d 입니다.",a, b, a/b,a%b);
	return 0;
}
