#include<stdio.h>
#include<stdlib.h>
#define STUDENT 3
#define EXAMS 4

int minimun(const int grasdes[][EXAMS], int pupils, int tests);
int maximun(const int grasdes[][EXAMS], int pupils, int tests);
double average(const int setofGrades[], int tests);
void printArray(const int grasdes[][EXAMS], int pupils, int tests);

int main(void)
{
	int student;
	const int studentGrades[STUDENT][EXAMS]=
	{ {77, 68, 86, 73},
	{ 96,87,89,78 },
	{ 70,90,86,81 }};

	printf("The array is:\n");
	printArray(studentGrades, STUDENT, EXAMS);

	printf("\n\nLowest grade; %d\nHighest grade; %d\n",
		minimun(studentGrades, STUDENT, EXAMS),
		maximun(studentGrades, STUDENT, EXAMS));
	for (student = 0; student < STUDENT; student++)
	{
		printf("The average grade for student %d is %.2f\n",
			student, average(studentGrades[student], EXAMS));
	}
	system("pause");
	return 0;
}

int minimun(const int grasdes[][EXAMS], int pupils, int tests)
{
	int i, j,lowGrade=100;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grasdes[i][j] < lowGrade)
			{
				lowGrade = grasdes[i][j];
			}

		}
	}
	return lowGrade;
}

int maximun(const int grasdes[][EXAMS], int pupils, int tests)
{
	int i, j, highGrade = 0;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grasdes[i][j] > highGrade)
			{
				highGrade = grasdes[i][j];
			}

		}
	}
	return highGrade;
}

double average(const int setofGrades[], int tests)
{
	int i, total = 0;

	for (i = 0; i < tests; i++)
	{
		total += setofGrades[i];
	}
	return (double)total / tests;
}

void printArray(const int grasdes[][EXAMS], int pupils, int tests)
{
	int i, j;

	printf("                [0]  [1]  [2]  [3]");

	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentgrades[%d}", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grasdes[i][j]);
	}
}