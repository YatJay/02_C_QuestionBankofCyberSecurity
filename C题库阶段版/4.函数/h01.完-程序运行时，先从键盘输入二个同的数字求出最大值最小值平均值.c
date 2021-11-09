/*程序运行时，先从键盘输入二个不相同的整数值，依次调用GetMax,GetMin,Getaverage函数获取二个数中的最大值，最小最，平均值，并保存到Result数组中。*/

/*
注意：
	 (x > y) ? x : y  运算的含义：
	 	if(x>y) 表达式值为x;
		else 表达式值为y; 
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
       int Result[3], i = 0; // Result数组用来存存储的最大值，最小值和平均值
       printf("output:\ninput two numbers:\n");
       scanf("%d%d", &Number1, &Number2);
       if (Number1 == Number2)
       {
              printf("输入二个不同的数字：\n");
              return 0;
       }
       /*在start和end之间完成函数的调用和参数的传递以及返回值的存储*/
       /******start******/
       Result[0] = GetMax(Number1, Number2);
       Result[1] = GetMin(Number1, Number2);
       Result[2] = GetAverage(Number1, Number2);
       /******end******/
       printf("\n最大数 最小数 平均值\n");
       for (i = 0; i < 3; i++)
       {
              printf("%6d", Result[i]);
       }
       printf("\n");
       return 0;
}
//取最大值函数
int GetMax(int x, int y)
{
       return (x > y) ? x : y;
}
//取最小值函数
int GetMin(int x, int y)
{
       return (x > y) ? y : x;
}
//取平均值函数
int GetAverage(int x, int y)
{
       return (x + y) / 2;
}
