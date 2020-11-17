#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a[10] = { 9,45,26,65,12,85,3,21,54,56 };
	int i, j, temp,b,k;
	for (i = 10; i > 1; i--)
	{
		b = 0;
		for (j = 1; j < i; j++)
		{
			if (a[j - 1] > a[j])
			{
				b=b+1;
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}

		}

		if (b == 0)
		{
			break;
	     }
	}

	printf("a[10]=");

	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	system("pause");
	return 0;
}