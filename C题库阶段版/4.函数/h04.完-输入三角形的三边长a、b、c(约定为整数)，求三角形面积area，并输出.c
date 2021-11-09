/*根据要求编写程序D5201的指定部分：
程序D5201.C已编写部分代码，请根据程序中的要求完善程序,不能对程序中已有部分作任何修改或重新编写一个程序，否则作0分处理。
程序的功能是：
	输入三角形的三边长a、b、c(约定为整数)，求三角形面积area，并输出。
	如果输入的三边构不成三角形，应给出“data error”的信息提示。
	注：根据“海伦－秦九韶”公式，area＝√p(p-a)(p-b)(p-c)，其中p＝(a+b+c)/2。*/

#include <math.h>
#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/******start******/
double fun(int a,int b,int c);
/******end******/

int main(void)
{   
	int aBian, bBian, cBian;
	double mJi;

	printf("\nplease input triange sides:");
	scanf("%d %d %d", &aBian, &bBian, &cBian);

	if (aBian<0 || bBian<0 || cBian<0
			|| (aBian+bBian <= cBian) || (aBian+cBian <= bBian) || (bBian+cBian <= aBian))
	{
		printf("\nOutput:\ndata error\n");
	}
	else
	{
		mJi = fun(aBian, bBian, cBian);
		printf("\nOutput:\narea=%.2f\n", mJi);
	}

	return 0;
}


/******start******/
double fun(int a,int b,int c){
	double p,area;
	p=(a+b+c)/2.0;
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	return area;
}
/******end******/
