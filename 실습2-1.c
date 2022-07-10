#include <stdio.h>

int main(void)
{
	int a, b;
	printf("a의 값을 입력하세요.\n");
	scanf("%d", &a);
	printf("b의 값을 입력하세요.\n");
	scanf("%d", &b);

	if (a >= 10)
	{
		if (b >= 0)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}

	printf("a의 결과값은 %d, b의 결과값은 %d 입니다.\n", a, b);

	return 0;
}