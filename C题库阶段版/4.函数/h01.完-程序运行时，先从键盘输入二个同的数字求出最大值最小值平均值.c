/*��������ʱ���ȴӼ��������������ͬ������ֵ�����ε���GetMax,GetMin,Getaverage������ȡ�������е����ֵ����С�ƽ��ֵ�������浽Result�����С�*/

/*
ע�⣺
	 (x > y) ? x : y  ����ĺ��壺
	 	if(x>y) ���ʽֵΪx;
		else ���ʽֵΪy; 
*/
#include <stdio.h>
#include <stdlib.h>
/******start******/
int GetMax(int x, int y);
int GetMin(int x, int y);
int GetAverage(int x, int y);
/******end******/
int main()
{
       int Number1 = 0, Number2 = 0;
       int Result[3], i = 0; // Result����������洢�����ֵ����Сֵ��ƽ��ֵ
       printf("output:\ninput two numbers:\n");
       scanf("%d%d", &Number1, &Number2);
       if (Number1 == Number2)
       {
              printf("���������ͬ�����֣�\n");
              return 0;
       }
       /*��start��end֮����ɺ����ĵ��úͲ����Ĵ����Լ�����ֵ�Ĵ洢*/
       /******start******/
       Result[0] = GetMax(Number1, Number2);
       Result[1] = GetMin(Number1, Number2);
       Result[2] = GetAverage(Number1, Number2);
       /******end******/
       printf("\n����� ��С�� ƽ��ֵ\n");
       for (i = 0; i < 3; i++)
       {
              printf("%6d", Result[i]);
       }
       printf("\n");
       return 0;
}
//ȡ���ֵ����
int GetMax(int x, int y)
{
       return (x > y) ? x : y;
}
//ȡ��Сֵ����
int GetMin(int x, int y)
{
       return (x > y) ? y : x;
}
//ȡƽ��ֵ����
int GetAverage(int x, int y)
{
       return (x + y) / 2;
}
