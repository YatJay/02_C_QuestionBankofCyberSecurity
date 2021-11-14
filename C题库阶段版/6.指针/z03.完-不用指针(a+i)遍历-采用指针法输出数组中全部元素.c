/*假设有一个数组a，整型，有5个元素，通过键盘输入数组各元素，要输出数组各元素的值。*/

/*
指针遍历数组的又一种方法:
 for(i=0,p=a;i<5;p++,i++)
	{
		printf("%d ",*p);
	}
*/
#include <stdio.h>

int main()
{
	int a[5];
	int *p,i;
	printf("please enter 5 integer numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Output:\n");
	/******start******/
	p=a;
	for(i=0;i<5;p++,i++)
	/******end******/
	{
		printf("%d ",*p);
	}
	printf("\n");
	return 0;
}
