#include <stdio.h>

void dd(void) {
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

void calculate(void)
{
	double x;
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf_s("%lf", &x);

	double result = 3 * x * x + 7 * x + 11;

		printf("���׽��� ��%lf:", result);

}

void weightOfMoon(void)
{
	double x;
	printf("�����Ը� �Է��ϼ���: ");
	scanf_s("%lf", &x);
	printf("�޿����� ������:%lf", x * 17 / 100);
	
}

void average(void)
{
	double x, y, z;

	printf("�Ǽ��� �Է��ϼ���:");
	scanf_s("%lf", &x);

	printf("�Ǽ��� �Է��ϼ���:");
	scanf_s("%lf", &y);

	printf("�Ǽ��� �Է��ϼ���:");
	scanf_s("%lf", &z);


	double sum = x + y + z;
	double avg = sum / 3;

	printf("���� %lf�̰� ����� %lf�Դϴ�",sum ,avg );

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