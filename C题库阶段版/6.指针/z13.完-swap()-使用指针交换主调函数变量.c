/*程序已编写部分代码，请根据程序中的要求完善程序
　程序的功能是：从键盘输入两个整数，分别保存到变量numA和numB，调用函数swap()实现numA和numB的交换，并在main函数中输出交换过后的numA和numB。*/

#include<stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/******start******/
void swap(int *a,int *b);
/******end******/

int main(void)
{
	int numA, numB;

	printf("please input a and b: ");
	scanf("%d %d", &numA, &numB);

	swap(&numA, &numB);
	printf("Output:\na=%d, b=%d\n", numA, numB);

	return 0;
}

/* 本部分代码功能建议：实现子函数swap()，完成a和b的交换 */
/******start******/
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
/******end******/

