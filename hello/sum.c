#include <stdio.h>
int main(void)
{
	int x;
	int y;
	int sum;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &x);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &y);

	sum = x + y;
	printf("�� ���� �� : %d\n", sum);

	return 0;

}