/*假设有一个数组a，有5个元素，通过键盘输入数组5个元素。
定义一个指针变量p，指向数组首地址；然后调用函数inv实现将数组元素相反存放，
然后在屏幕输出相反顺序存放的数组元素。
*/

/*
改动版本在数组原地反转函数中使用for循环，相比于使用while循环常常忘记i++，for循环具有一定优势 
*/

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
	int i,temp;
	i=0; 
	while(i<=n/2-1){
		temp=*(x+i);
		*(x+i)=*(x+n-1-i);
		*(x+n-1-i)=temp;
		i++;
	}
/******end******/
}
