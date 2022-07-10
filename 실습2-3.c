#include <stdio.h>

int main(void)
{
	int grade;

	printf("정수 값으로 점수를 입력하세요.\n");
	scanf("%d", &grade);

	if (grade >= 0 && grade <= 100)
	{
		if (grade >= 90)
		{
			printf("A학점\n");
		}
		else if (grade >= 80)
		{
			printf("B학점\n");
		}
		else if (grade >= 70)
		{
			printf("C학점\n");
		}
		else
			printf("F학점\n");
	}
	else if (grade < 0) {
		printf("음수가 입력되었습니다! 프로그램을 다시 실행해 주세요.");
	}
	else {
		printf("점수는 100을 초과할 수 없습니다! 프로그램을 다시 실행해 주세요.");
	}
	return 0;
}