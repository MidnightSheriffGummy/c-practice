#include <stdio.h>

void add(void) {
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

int main(void)
{
	exchangeRate();
	return 0;

}