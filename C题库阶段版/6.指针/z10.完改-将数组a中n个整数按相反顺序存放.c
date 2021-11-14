/*假设有一个数组a，有5个元素，通过键盘输入数组5个元素。
然后调用函数inv实现将数组元素相反存放，
然后在屏幕输出相反顺序存放的数组元素。*/

#include <stdio.h>
void inv(int *x,int n);
int main()
{    
	 int i,a[5];
	 printf("The original array:\n");
	 for(i=0;i<5;i++)
	   scanf("%d",&a[i]);
	 printf("Output:\n");
	 inv(a,5);
	 printf("The array has been inverted:\n");
	 for(i=0;i<5;i++)
	   printf("%d ",a[i]);
	 printf("\n");
	 return 0;
}

void inv(int *x,int n)                   //形参x是指针变量       
{
/******start******/
	int i, tmp;
	for (i=0;i<n/2; i++){  //此处改动，使用了for循环 
		tmp=*(x+i);
		*(x+i)=*(x+n-1-i);
		*(x+n-1-i)=tmp;
	}
/******end******/
}
