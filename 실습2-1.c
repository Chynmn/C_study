#include <stdio.h>

int main(void)
{
	int a, b;
	printf("a�� ���� �Է��ϼ���.\n");
	scanf("%d", &a);
	printf("b�� ���� �Է��ϼ���.\n");
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

	printf("a�� ������� %d, b�� ������� %d �Դϴ�.\n", a, b);

	return 0;
}