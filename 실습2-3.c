#include <stdio.h>

int main(void)
{
	int grade;

	printf("���� ������ ������ �Է��ϼ���.\n");
	scanf("%d", &grade);

	if (grade >= 0 && grade <= 100)
	{
		if (grade >= 90)
		{
			printf("A����\n");
		}
		else if (grade >= 80)
		{
			printf("B����\n");
		}
		else if (grade >= 70)
		{
			printf("C����\n");
		}
		else
			printf("F����\n");
	}
	else if (grade < 0) {
		printf("������ �ԷµǾ����ϴ�! ���α׷��� �ٽ� ������ �ּ���.");
	}
	else {
		printf("������ 100�� �ʰ��� �� �����ϴ�! ���α׷��� �ٽ� ������ �ּ���.");
	}
	return 0;
}