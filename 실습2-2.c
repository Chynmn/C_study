#include <stdio.h>

int main(void)
{
	int rank, m;

	printf("rank�� ���� �Է��ϼ���.\n");
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

	printf("m�� ���� %d �Դϴ�.\n", m);

	return 0;
}