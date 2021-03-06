/* 有一递推数列，满足f(0)=0,f(1)=1,f(2)=2,  f(n+1)=2f(n)+f(n-1)f(n-2) (n>=2), 
	编写程序求f(n)的值（n由键盘输入，13>=n>=2）。
	编程可用素材：printf("Input n (13>=n>=2): ")...、printf("Output:\nf(...)=...\n"...。
　　程序的运行效果应类似地如图1所示，图1中的10是从键盘输入的内容。*/

/*
题目所给递归函数使用数组循环计算结果 
*/
#include <stdio.h>
int main(void)
{
	int i, n;
	double array[21];

	printf("Input n (13>=n>=2):");
	scanf("%d", &n);

	array[0] = 0;
	array[1] = 1;
	array[2] = 2;
	for (i = 3; i <= n; i++){
		array[i]=2*array[i-1]+array[i-2]*array[i-3];
	}
	printf("Output:\nf(%d)=%.0f\n", n, array[n]);
	return 0;
}
