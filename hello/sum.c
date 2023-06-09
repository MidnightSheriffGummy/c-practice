#include <stdio.h>

void dd(void) {
	int x;
	int y;
	int sum;

	printf("첫번째 숫자를 입력하시오: ");
	scanf_s("%d", &x);

	printf("두번째 숫자를 입력하시오: ");
	scanf_s("%d", &y);

	sum = x + y;
	printf("두 수의 합 : %d\n", sum);
}

void exchangeRate(void)
{
	double rate;
	double usd;
	int krw;

	printf("환율을 입력하시오:");
	scanf_s("%lf", &rate);

	printf("원화금액을 입력하시오:");
	scanf_s("%d", &krw);

	usd = krw / rate;

	printf("원화 %d원은 %lf달러 입니다.\n", krw, usd);
}

void calculate(void)
{
	double x;
	printf("실수를 입력하세요: ");
	scanf_s("%lf", &x);

	double result = 3 * x * x + 7 * x + 11;

		printf("다항식의 값%lf:", result);

}

void weightOfMoon(void)
{
	double x;
	printf("몸무게를 입력하세요: ");
	scanf_s("%lf", &x);
	printf("달에서의 몸무게:%lf", x * 17 / 100);
	
}

void average(void)
{
	double x, y, z;

	printf("실수를 입력하세요:");
	scanf_s("%lf", &x);

	printf("실수를 입력하세요:");
	scanf_s("%lf", &y);

	printf("실수를 입력하세요:");
	scanf_s("%lf", &z);


	double sum = x + y + z;
	double avg = sum / 3;

	printf("합은 %lf이고 평균은 %lf입니다",sum ,avg );

}

void add(void)
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d", a + b);
	
}

void diff(void)
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d", a - b);
}

int main(void)
{
	diff();
	return 0;

}