#include <stdio.h>

int main(void)
{
	int rank, m;

	printf("rank의 값을 입력하세요.\n");
	scanf("%d", &rank);

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m의 값은 %d 입니다.\n", m);

	return 0;
}