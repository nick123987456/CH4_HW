#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a[10] = { 9,45,26,65,12,85,3,21,54,56 };
	int i, j,temp;
	for (i = 10; i > 1; i--)
	{
		for (j = 1; j < i; j++)
		{
			if (a[j - 1] > a[j])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("a[10]=");

	for (i = 0; i < 10; i++)
	{
		printf("%d " , a[i]);
	}

	printf("\n");

	system("pause");
	return 0;
}