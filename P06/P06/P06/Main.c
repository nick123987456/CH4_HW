#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(void)
{
	int i, n[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		n[i] = 2 + 2 * i;
	}

	printf("%s%13s\n", "Element", "Value");

	for (i = 0; i < SIZE; i++)
	{
		printf("%7d%13d\n", i, n[i]);
	}

	system("pause");
	return 0;
}