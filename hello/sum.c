#include <stdio.h>

void add(void) {
	int x;
	int y;
	int sum;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &x);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &y);

	sum = x + y;
	printf("�� ���� �� : %d\n", sum);
}

void exchangeRate(void)
{
	double rate;
	double usd;
	int krw;

	printf("ȯ���� �Է��Ͻÿ�:");
	scanf_s("%lf", &rate);

	printf("��ȭ�ݾ��� �Է��Ͻÿ�:");
	scanf_s("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d���� %lf�޷� �Դϴ�.\n", krw, usd);
}

int main(void)
{
	exchangeRate();
	return 0;

}