#include<stdio.h>
int main()
{
	int x, y, z;
	printf("number1 = ");
	scanf_s("%d", &x);
	printf("number2 = ");
	scanf_s("%d", &y);
	if (x > y)
	{
		z = x;
		for (;x >= y;x--)
		{
			printf("%d ", x);
		}
		printf("\n%d more %d", z, y);
	}
	else
	{
		z = x;
		for (;x <= y;x++)
		{
			printf("%d ", x);
		}
		printf("\n%d less %d", z, y);
	}
	return 0;
}
