#include <stdio.h>
#include <iostream>
#include <time.h>
#include <locale.h>
#define N 10
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	/*
	1.	������ ������������ ��� �������� �������� ����� �������� �������.
	� ������� ������� ��������� ����� ��������� ������ ������ ����������,
	�������� � ��������� �� 50 �� 100 ������������
	*/
	//int x[20] = { 0 };
	//for (size_t i = 0; i < 20; i++)
	//{
	//	x[i] = 50 + rand() % 51;
	//	printf("%d;;\n", x[i]);
	//}

	/*
	2.��������� ������ �� ������ ��������� ����� �������, 
	����� �������� ��������� ��� ��������� ������� ����� ������� ������������: 
		a.	��������� ������������������; 
		b.	������������ ������������������
	*/
	//int x[8] = { 0 };
	//for (size_t i = 0; i < 8; i++)
	//{
	//	x[i] = 7 - i + 1;
	//	printf("%d;\n", x[i]);
	//}
	//for (size_t i = 0; i < 8; i++)
	//{
	//	x[i] = i + 1;
	//	printf("--%d\n", x[i]);
	//}

	/*
	3.	������ ������������� ������, ��������� �� 10 ���������. 
	�������� ������� ������������ � ������ ��������.
	*/
	//int x[10] = { 0 };
	//
	//for (size_t i = 0; i < 10; i++)
	//{
	//	x[i] = 1 + rand() % 99;
	//	printf("%d;;\n", x[i]);
	//}
	//printf("--%d\n", x[0]);
	//printf("==%d\n", x[9]);

	/*
	4.	����� ������, ��������� �� 15 ��������� ������������� ����.
	���������� ���������� ���������, �������� ������� ������ ������� ��������.
	*/
	//int x[15] = { 0 };
	//for (size_t i = 0; i < 15; i++)
	//{
	//	x[i] = 1 + rand() % 50;
	//	printf("x[%d] = %d;;\n",i, x[i]);
	//if (x[i] > x[0])
	//	{
	//	printf("++\t\t%d\n", x[i]);
	//	}
	//}

	/*
	5.	������ ������������� ������, ��������� �� 15 ���������.
	���������� ����� � �������� ������������� � ������������  ���������
	*/
	//int x[15] = { 0 };
	//int max=0, min = 0, i, sum, raznost;
	//for (size_t i = 0; i < 15; i++)
	//{
	//	x[i] = 1 + rand() % 50;
	//	printf("%d;;\n", x[i]);
	//	if (x[i] >= max)
	//	{
	//		max = x[i];
	//	}
	//	if (x[i] <= min)
	//	{
	//		min = x[i];
	//	}
	//}
	//sum = max + min;
	//printf("�������� = %d, ������� = %d\n", max, min);
	//raznost = max - min;
	//printf("�� ����� = %d, �������� = %d\n", sum, raznost);

	/*
	10.	��� ������ �(15) ������������ �����. 
	����������� �������� � �������� �������
	*/
	//int a[N], i, b;
	//for (i = 0; i<N; i++) scanf_s("%d", &a[i]);
	//for (i = 0; i<N / 2; i++) {
	//	b = a[i];
	//	a[i] = a[N - i - 1];
	//	a[N - i - 1] = b;
	//}
	//for (i = 0; i < N; i++) printf("%d;\n", a[i]);
	//printf("\n");


	system("pause");
}